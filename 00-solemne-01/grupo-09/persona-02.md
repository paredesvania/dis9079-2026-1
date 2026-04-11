# persona-02: Marcela Zúñiga

integradas mas abajo

## sobre adafruit i/o

Configuración de software: Tuvimos que instalar la librería de Adafruit dentro del programa Arduino IDE. Esto fue clave para poder vincular nuestra placa Arduino Uno R4 con la red WiFi y conectarla con la nube.


<img width="1554" height="334" alt="adafruit biblio" src="https://github.com/user-attachments/assets/1d9d8967-95ff-45e7-8c8c-efacbff745b1" />


<img width="723" height="442" alt="image" src="https://github.com/user-attachments/assets/21964ce1-a441-45a2-8ff1-1025f7889850" />

Armado del entorno: En la plataforma web de Adafruit IO, creamos nuestro canal de datos (llamado "prueba01") y configuramos el Dashboard. Inicialmente intentamos usar un bloque de tipo "Toggle" (un interruptor de encendido/apagado visual), pero tras varios problemas, terminamos configurando un bloque de tipo "Text" para enviar las instrucciones.


<img width="1328" height="773" alt="PROCESO_DE_FEED" src="https://github.com/user-attachments/assets/f0a6e16c-a186-41c9-91ed-5e268a4ebd9e" />

### Dificultades encontradas:

Errores de tipeo en credenciales: Al principio el sistema no lograba conectarse a la red y el monitor serie se quedaba en un bucle  mostrando puros puntitos (...). Revisando, nos dimos cuenta de un error súper simple: habíamos escrito mal la última letra de la contraseña del WiFi.

Falla en la interfaz gráfica (Toggle): Estuvimos aproximadamente dos horas intentando que el bloque Toggle encendiera y apagara los LEDs del Arduino. Modificamos el código muchísimas veces, pero no logramos que el Arduino recibiera la información, por lo que tuvimos que cambiar de proceso.

### Aprendizaje

Logro del objetivo: Logramos que el Arduino recibiera exitosamente el mensaje "ON". Aunque intentamos mandar un "OFF" y este nunca llegó, nos quedamos súper contentas de haber logrado, al menos, la recepción de un dato de forma inalámbrica.

Conexión digital-físico: Entendí en la práctica la lógica, fue súper interesante ver cómo una interfaz web que opera netamente en una pantalla sirve como puente directo para mandar instrucciones a un objeto físico a distancia.

## sobre artista, diseñadora o producto que usa electrónica o computación inalámbricas


