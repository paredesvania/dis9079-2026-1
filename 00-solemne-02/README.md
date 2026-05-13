# solemne-02

la solemne-02 ocurre en torno al lunes 18 de mayo 2026.

debido a la contingencia de la semana pasada por el incendio, trabajaremos de esta forma:

- lunes 18 mayo 2026: trabajo en solemne-02 en clases.
- viernes 22 mayo 2026: subir solemne-02 a github.
- domingo 24 mayo 2026: revisión de solemne-02 por parte de docentes, publicación de nota en borrador.
- lunes 25 mayo 2026: mejoras en clase de la solemne-02 y bonificaciones por demostraciones en vivo.

## equipos

estudiantes del curso se dividieron en estos 11 grupos:

- grupo-01
  - antokiaraa
  - tomascatri
  - angel-udp
- grupo-02
  - marlensoto-lab
  - marcezm
- grupo-03
  - magdalenabalart
  - jesumirandaa
  - ccarlabelenn
- grupo-04
  - agustinaaceituno
  - AntFuentealba
- grupo-05
  - arevalourra
  - isipm08
  - nicolasvaldesgreve
- grupo-06
  - Camila-Parada
  - paredesvania
- grupo-07
  - benjaminalvarez21
  - Anaysval
- grupo-08
  - sofiacartes
  - Monserrat-Paredes
  - vxlentiinaa
- grupo-09
  - josefa-kristina
  - DebSkar
  - cristobalvergarasilva
- grupo-10
  - brauliofigueroa2001
  - Luisaatoro9
- grupo-11
  - AlegriaColoma
  - antolavalle
  - catasal

## desafío

usar código en microcontroladores para hacer una comunicación inalámbrica a través de Adafruit IO, usando sensores y actuadores.

Queremos que la comunicación ocurra entre dos placas, separadas por el vidrio de la sala de clases, entonces una que esté dentro de la sala y otra fuera en el patio, no importa cuál envía o recibe, cada grupo elije.

La placa que envía información lo hace con un sensor en particular, a elección de ustedes, y la placa que recibe información toma esta información y la usa para controlar un actuador, o para mostrar información gráfica en una pantalla.

Tenemos el desafío de no saturar nuestro canal de Adafruit IO, por lo que el envío de información debe ser lento y además controlado por un botón o similar, que por ejempl solamente permita el envío de información mientras es presionado, y que cuando se suelta deje de enviar información.

Tenemos el mismo desafío para la placa que recibe información, que solo debe pedirle información a Adafruit IO mientras se presiona un botón o similar, y que cuando se suelta deje de recibir información.

Si quieren trabajar entre grupos, y que un grupo se dedique totalmente a enviar y otro a recibir, pueden hacerlo, pero no es obligatorio, cada grupo puede hacer ambas partes si así lo desean. Eso sí, cada grupo debe aprender todo y documentar todo el proceso, para que cada estudiante pueda aprender de todo el proceso, y no solo de una parte.

## instrucciones

en grupos llenar cada carpeta, les ruego NO cambiar los nombres de las carpetas y los archivos, para que el proceso de evaluación sea más fluida.

## pauta

la nota tiene 1 punto base más 6 puntos evaluados.

- los 3 primeros puntos son criterios grupales.
- los 3 siguientes puntos son criterios individuales.

este es el desglose:

1. grupal - DOCS: documentación en la carpeta de solemne-02 de todo el trabajo y los aprendizajes del proyecto realizado, incluyendo texto y multimedia: imágenes y GIFs si es necesario. NO subir videos, para evitar problemas de almacenamiento en github. Subirlos a otra web como Youtube y enlazarlos en la documentación.

2. grupal - CÓDIGO ENVIAR: código para enviar información desde una placa a Adafruit IO, con información de algún sensor, y con un botón o similar que controle el envío de la información.

3. grupal - CÓDIGO RECIBIR: código para recibir información desde Adafruit IO hacia otra placa, y usarla para controlar algún actuador o mostrar información gráfica en una pantalla. Además incluir un botón o similar que controle el envío de la información.

4. individual - BITÁCORAS: bitácoras individuales de las sesiones de clases, esto se evaluará en las subcarpetas que tiene cada estudiante.

5. individual - INVESTIGACIÓN SENSOR: investigación individual de aprendizajes sobre el uso de un sensor, el filtrado de información, la visualización de datos, problemas comunes, y obra de artista, o proyecto, o empresa que use ese sensor.

6. individual - INVESTIGACIÓN ACTUADOR: lo mismo que que el punto 5 pero con actuadores, en vez de sensores.

para los puntos 5. y 6. se evaluará la profundidad de la investigación, la claridad de la documentación y el esfuerzo demostrado en la investigación. se escribe en los archivos `persona-01.md`,  `persona-02.md` y `persona-03.md`, donde cada estudiante debe plasmar la investigación realizada por y durante la solemne-02.
