# persona-01

investigaciones individuales

## sobre adafruit i/o

Adafruit IO es una plataforma en la nube diseñada para gestionar datos de dispositivos físicos conectados a internet (IoT), poniendo énfasis en la visualización, interacción en tiempo real y facilidad de uso. Fue desarrollada por Adafruit, una empresa muy conocida en el mundo del hardware abierto y la educación tecnológica.

Adafruit IO funciona como un intermediario entre el mundo físico y el mundo digital.

+ Traduce fenómenos físicos (temperatura, luz, sonido, presencia, etc.) en datos digitales
+ Permite almacenar esos datos en servidores remotos (la nube)
+ Te deja interactuar con esos datos desde interfaces visuales o desde otros sistemas

## Estructura interna

## Feeds (flujos de datos)

+ Cada feed almacena una variable
+ Funciona como una línea temporal de datos
+ Puedes leer y escribir en ellos

## Dashboards (interfaces visuales)

* Ver datos en gráficos (líneas, gauges, indicadores)
* Crear botones o sliders para enviar comandos

Es básicamente una interfaz gráfica conectada a los feeds

## Blocks (componentes visuales)

Dentro de los dashboards

* Gráficos
* Interruptores
* Indicadores
* Mapas, texto, etc.

Cada block está vinculado a un feed

## Triggers (automatización)

Permiten crear reglas del tipo:

+ *Si pasa X → entonces hacer Y*

Ejemplo: Si temperatura > 30°C → enviar notificación o activar dispositivo

## Integraciones

Adafruit IO se puede conectar con:

+ Dispositivos físicos (Arduino, ESP8266, ESP32)
+ APIs externas
+ Otras plataformas (como IFTTT)

## Comunicación (parte técnica clave)

## MQTT (Message Queuing Telemetry Transport)

+ Protocolo ligero, ideal para dispositivos con poca potencia
+ Funciona por publish/subscribe:

  + Un dispositivo “publica” datos
  + Otros “se suscriben” para recibirlos

## HTTP

+ Más simple pero menos eficiente en tiempo real
+ Funciona con solicitudes tipo GET/POST

## Flujo completo de datos

1. Un sensor mide algo (ej: luz)
2. Un microcontrolador (ej: ESP32) procesa el dato
3. Lo envía a Adafruit IO vía MQTT o HTTP
4. El dato se guarda en un feed
5. El dashboard lo visualiza
6. Opcional: un trigger genera una acción

## Enfoque conceptual

Adafruit IO no es solo técnico:
es una herramienta para diseñar sistemas interactivos sensibles al entorno.

Permite trabajar con:

+ Datos como material de diseño
+ Interacción en tiempo real
+ Relaciones causa–efecto entre entorno y objeto

## Ventajas

+ Muy accesible 
+ Visualización rápida sin programar interfaces complejas
+ Integración directa con hardware educativo

## Limitaciones

+ No es tan potente como soluciones industriales
+ Tiene límites en la versión gratuita
+ Dependes de conexión a internet

<img width="1080" height="810" alt="IMG_0057" src="https://github.com/user-attachments/assets/0c5daedb-0d63-4025-a788-e82a25d963d7" />

## sobre artista, diseñadora o producto que usa electrónica o computación inalámbricas

## Golan Levin

Golan Levin es un artista, programador y diseñador estadounidense clave en el campo del arte digital interactivo. Su trabajo se sitúa entre el arte, la tecnología y la comunicación, explorando cómo las personas pueden interactuar con sistemas computacionales en tiempo real.

+ Se enfoca en la interacción humana con máquinas: sus obras reaccionan al movimiento, la voz o el comportamiento del público.
+ Mezcla código, imagen, sonido y participación.
+ Sus proyectos suelen ser lúdicos, pero también críticos: cuestionan cómo nos relacionamos con la tecnología.

Tipos de obras que hace.

+ Instalaciones interactivas: espacios donde el espectador activa la obra.
+ Performance audiovisual: combina música, visuales generados en vivo y programación.
+ Software creativo: desarrolla herramientas para artistas y diseñadores.

## Messa di Voce
2003 | Tmema (Golan Levin y Zachary Lieberman) con Jaap Blonk y Joan La Barbara

<img width="665" height="356" alt="image" src="https://github.com/user-attachments/assets/ef4a5584-97c9-4634-a408-e85405b5580c" />

+ Messa di Voce complementa el habla, los gritos y las canciones de dos vocalistas con visualizaciones interactivas en tiempo real. El proyecto aborda temas como la comunicación abstracta, las relaciones sinestésicas, el lenguaje de los dibujos animados y los sistemas de escritura y puntuación, todo ello dentro del contexto de una narrativa audiovisual sofisticada, lúdica y virtuosa. Un software personalizado transforma cada matiz vocal en gráficos complejos, sutilmente diferenciados y altamente expresivos. Messa di Voce se sitúa en la intersección de los extremos de la interpretación humana y tecnológica, fusionando la espontaneidad impredecible y las técnicas vocales extendidas de los improvisadores humanos con las últimas tecnologías de visión artificial y análisis del habla. Completamente sin palabras, pero profundamente verbal, Messa di Voce está diseñada para provocar preguntas sobre el significado y los efectos de los sonidos del habla, los actos de habla y el entorno inmersivo del lenguaje.
