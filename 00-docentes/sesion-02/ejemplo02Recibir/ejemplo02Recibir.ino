// ejemplo02Recibir
// placa se conecta a un servidor mosquitto
// y recibe mensajes del topic asistencia/20260316
// basado en ejemplo de la biblioteca
// ArduinoMqttClient - WiFi Simple Receive
// marzo 2026
// por montoyamoraga para disenoUDP


/*
  ArduinoMqttClient - WiFi Simple Sender

  This example connects to a MQTT broker and publishes a message to
  a topic once a second.
*/

// importar bibliotecas
#include <ArduinoMqttClient.h>
#include <WiFiS3.h>

// importar archivo .h con claves
#include "arduino_secrets.h"

char ssid[] = SECRET_SSID;
char pass[] = SECRET_PASS;

WiFiClient wifiClient;
MqttClient mqttClient(wifiClient);

const char broker[] = "10.174.124.28";
int port = 1883;
const char topic[] = "asistencia/20260316";

const long intervalo = 10000;
unsigned long previousMillis = 0;

int count = 0;

void setup() {
  // inicializar el puerto serial
  Serial.begin(9600);
  // si no se ha inicializado, esperar
  while (!Serial) {
    ;
  }

  // conectarse a wifi
  Serial.print("conectandose a red ");
  Serial.println(ssid);

  while (WiFi.begin(ssid, pass) != WL_CONNECTED) {
    // si falla, reintentar
    Serial.print(".");
    delay(5000);
  }

  Serial.println("te conectaste a la red!");

  // ID del cliente
  // cada cliente debe tener una ID unica
  mqttClient.setId("montoyamoraga");

  // autenticacion con username y clave
  mqttClient.setUsernamePassword("montoyamoraga", "dis9079");

  Serial.print("tratando de conectarse al MQTT broker ");
  Serial.println(broker);

  if (!mqttClient.connect(broker, port)) {
    Serial.print("conexion a MQTT fallida! codigo del error = ");
    Serial.println(mqttClient.connectError());

    while (1)
      ;
  }

  Serial.println("te conectaste al MQTT broker!");
  Serial.println();

  Serial.print("subscribiendose al topic: ");
  Serial.println(topic);
  Serial.println();

  // subscribe to a topic
  mqttClient.subscribe(topic);

  // topics can be unsubscribed using:
  // mqttClient.unsubscribe(topic);

  Serial.print("esperando mensajes en el topic: ");
  Serial.println(topic);
  Serial.println();
}


void loop() {
  int messageSize = mqttClient.parseMessage();
  if (messageSize) {
    // we received a message, print out the topic and contents
    Serial.print("recibi un mensaje con el topic '");
    Serial.print(mqttClient.messageTopic());
    Serial.print("', length ");
    Serial.print(messageSize);
    Serial.println(" bytes:");

    // use the Stream interface to print the contents
    while (mqttClient.available()) {
      Serial.print((char)mqttClient.read());
    }
    Serial.println();

    Serial.println();
  }
}

