#include <stdio.h>
#include <string.h>

#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "pico/cyw43_arch.h"

#include "lwip/apps/mqtt.h"
#include "lwip/ip_addr.h"

// ====== USER CONFIG ======
#define WIFI_SSID     "tallervertical"
#define WIFI_PASSWORD "0987654321"

#define MQTT_SERVER   "io.adafruit.com"
#define MQTT_PORT     1883

#define MQTT_USERNAME "udpmontoyamoraga"
#define MQTT_PASSWORD "BLABLA"

#define MQTT_TOPIC    MQTT_USERNAME "/feeds/potenciometro-aaron"

// =========================

static mqtt_client_t *mqtt_client;

// Callback when MQTT connection is established
static void mqtt_connection_cb(mqtt_client_t *client, void *arg, mqtt_connection_status_t status) {
    if (status == MQTT_CONNECT_ACCEPTED) {
        printf("MQTT connected!\n");
    } else {
        printf("MQTT connection failed: %d\n", status);
    }
}

// Publish value
void mqtt_publish_value(int value) {
    char payload[16];
    int len = snprintf(payload, sizeof(payload), "%d", value);

    err_t err = mqtt_publish(
        mqtt_client,
        MQTT_TOPIC,
        payload,
        len,
        0,   // QoS
        0,   // retain
        NULL,
        NULL
    );

    if (err != ERR_OK) {
        printf("Publish error: %d\n", err);
    } else {
        printf("Sent: %s\n", payload);
    }
}

int main() {
    stdio_init_all();

    // ADC setup
    adc_init();
    adc_gpio_init(26);
    adc_select_input(0);

    // WiFi init
    if (cyw43_arch_init()) {
        printf("WiFi init failed\n");
        return 1;
    }

    cyw43_arch_enable_sta_mode();

    printf("Connecting to WiFi...\n");
    if (cyw43_arch_wifi_connect_timeout_ms(
            WIFI_SSID,
            WIFI_PASSWORD,
            CYW43_AUTH_WPA2_AES_PSK,
            30000)) {
        printf("WiFi failed\n");
        return 1;
    }

    printf("WiFi connected!\n");

    // Create MQTT client
    mqtt_client = mqtt_client_new();

    ip_addr_t broker_ip;
    ipaddr_aton("io.adafruit.com", &broker_ip);

    struct mqtt_connect_client_info_t ci = {
        .client_id = "pico_w_client",
        .client_user = MQTT_USERNAME,
        .client_pass = MQTT_PASSWORD,
        .keep_alive = 60,
    };

    printf("Connecting to MQTT...\n");

    mqtt_client_connect(
        mqtt_client,
        &broker_ip,
        MQTT_PORT,
        mqtt_connection_cb,
        NULL,
        &ci
    );

    sleep_ms(2000); // give time to connect

    // ===== Main loop =====
    while (true) {
        // smoothing
        uint32_t sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += adc_read();
            sleep_ms(2);
        }

        uint16_t raw = sum / 10;

        // scale 0–4095 → 0–1023
        int value = (raw * 1023) / 4095;

        printf("Raw: %d -> %d\n", raw, value);

        mqtt_publish_value(value);

        sleep_ms(5000);
    }

    cyw43_arch_deinit();
    return 0;
}