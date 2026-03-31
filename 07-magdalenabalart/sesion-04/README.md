# sesion-04

### Topic MQTT: ###
broker mqtt protocolo de comunicación muy liviano para que dispositivos se manden mensajes entre sí por red

### 3 partes claves ### 
 
1. Publisher
2. Subscriber
3. Broker

 ### WI FI ###
conexión inalámbrica que permite que un dispositivo se comunique con una red sin cable
Con Wi-Fi, un dispositivo puede:

-conectarse a internet 
-conectarse a una red local 
-mandar datos a otro dispositivo  
-recibir mensajes desde otro dispositivo 

### IP ### 
un dispositivo tiene una dirección IP para que los datos sepan a dónde ir. 
 
Ejemplo:

Raspberry Pico: 192.168.1.35
Arduino manda un mensaje a esa IP
la Raspberry lo recibe y muestra algo en la OLED

<ins>En clase probamos: Wifi Web Server Led Blink</ins>


### Referente ###
Claude shannon theory of communication 

**son apuntes para no perder ideas**

Proyecto solemne 01 grupo Amistad es Amigo  

idea general del proyecto
1. sensor de pulso va conectado a arduino
2. el arduino capta señal del sensor
3. cuando detecta pulso válido, envía un mensaje inalámbrico
4. la pico 2w está escuchando y conectada a pantalla
5. cuando recibe mensaje actualiza pantalla y muestra  mensaje.

Flujo de proyecto:
Sensor de pulso -> Arduino -> MQTT x wifi -> Broker MQTT -> Raspberry -> pantalla Oled 

Lista de útiles : 
-Arduino   
-1 sensor pulso cardíaco  
-1 pantalla Oled I2c 128x64 
-1 LED 
-Cables Dupont  
-Protoboard 
-2 cables usb  
-1 red wifi  

negativo gnd
sacadito en palito luz led es igual a negativo



Lunes 30 Marzo:

1. Conectar Arduino a Sensor pulso.

   -Sensor pulso a cable rojo 5v, cable negro gnd, amarillo a0 
   -Led (mejor en protoboard con una resistencia)
   -Tener cuidado luz sensor es muy sensible
   -Leer codigo si no funciona
   -codigo corazón LEDMATRIX_HEART_BIG y LEDMATRIX_HEART_SMALL
    


lunes 30 marzo 2026
