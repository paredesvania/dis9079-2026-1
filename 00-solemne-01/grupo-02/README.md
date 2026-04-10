# friendshipisfriend-02

## integrantes

* Magdalena Balart
* Jesus Miranda
* Carla Nuñez

## descripción del proyecto

## materiales usados en solemne-01

- 2 Arduinos
- Dupont
- USB c
- Protoboard
- Led
- Cable
- Pantalla oled
- Pulsómetro

## proceso

primero probamos usando el codigo.ino que mandó aron de contador, ya que nos había funcionado en la clase pero con el dashboard de aron, no habíamos probado con nuestra cuenta entonces nos creamos un dashboard llamado prueba1, con un feed mensaje y ese feed fue lo único que cambiamos del código de aron. al inicio no funcionó, creemos que algo se nos desordenó entonces borramos el dashboard y el feed, lo rehicimos, pusimos un bloque de texto y fue increíble porque funcionó. eso si al inicio pensábamos que no funcionaba porque decía que estaba desconectado de adafruit pero después nos dimos cuenta que era falta de paciencia ya que se demoraba entre 2 a 3 min en conectar.

ya con eso listo, probamos ya con el pulsómetro, vimos un código de un tutorial de youtube, también tuvimos que descargar otra librería, pero queríamos intentar que cuando el pulsómetro recibiera actividad, en vez de mostrar los bpm, mostrara nuestro mensaje "amistad es amigo", en esta parte del proceso aprendimos que al conectarle elementos externos, al código se le debe sumar la librería, en este caso: #include <PulseSensorPlayground.h>. también quisimos probar tener dos bloques ósea dos feed distintos, uno que detectara el mensaje y otro que pudiera detectar el bpm. vimos hartos tutoriales, pero no había algo tan especifico, entonces intentamos mezclar el codigo dr include + el del tutorial del pulsómetro y el de imprimir mensaje: Serial.println, pero probablemente nos faltaban códigos entremedio y aplicamos pedir ayuda a chatgpt, quien nos unió esos códigos y funcionó. El problema era que el pulsómetro era demasiado sensible y estaba mandando demasiados mensajes en muy poco tiempo a adafruit y eso lo colapsó, cambiamos el código para que ignorara los bpm y que fuera que al detectar actividad (el dedo puesto) y al sacarlo, si después de 3sg no había actividad se mandaba el mensaje (const unsigned long tiempoSinLatido = 3000;) esta idea tampoco funcionó inmediatamente pero también porque la sintaxis que encontrábamos estaba mala y también chatgpt nos ayudó a unir todo. al final logramos que el mensaje se enviara más limpio al dashboard, pero para visualizarlo mejor agregamos una caja de stream y funcionó.

Después queríamos probar con la pantalla oled que compramos. primero tuvimos que ver un tutorial para ver cómo se conectaba, a diferencia del pulsómetro que venía con el cable conectado al sensometro(? tuvimos que conectar la pantalla a cables dupont hembras-machos (no se si se llama así) también tuvimos que descargar librerías nuevas y usamos el código de un tutorial de youtube. entonces aquí queríamos probar algo similar al pulsómetro, darle una variable de tiempo y que cada cierto tiempo pasara algo, osea, que cada 4 segundos apareciera un corazón y que cuando apareciera el corazón enviara un mensaje al dashboard al bloque stream, amistad es amigo. aquí ya fue difícil porque no sabíamos donde encontrar un corazón y en un tutorial habían corazones con bitmap pero quedaba cortado, luego encontramos un código que era un corazón con dos círculos y un triángulo dado vuelta. este proceso fue engorroso, porque teníamos el corazón pero no teníamos bien las variables del tamaño si se iba a hacer pequeño o no y al buscar en google, la inteligencia artificial de google mandaba ciertos códigos que al inicio las primeras pruebas no funcionaron pero ya luego cuando leímos el código bien entendimos que estaba fallando que la velocidad de refresco visual era más alta que el ciclo de animación del corazón 5sg y del ciclo de espera 10sg.

Después quisimos probar a la distancia con el otro arduino que estaba en otra casa, queríamos que funcionara similar a la lógica de variables del corazón en pantalla, que cada cierto segundo apareciera el mensaje amistad es amigo y se encendiera un led y que cuando el led se apagaba el mensaje fuera te extraño amigo. aquí recordamos las variables que se hablaron la primera clase: false y true, el primer estado iba a ser false, led apagada y mensaje te extraño amigo,,,, entonces nuevamente con ayuda de chatgpt, ordenamos los códigos de variables que queríamos y se basaban en Serial.println("LED encendido -> amistad es amigo"); y Serial.println("LED apagado -> te extraño amigo");.

ya con estas pruebas decidimos que el proyecto final se iba a concretar en que, desde el arduino 01 que estaba en casa 01 (arduino con led que manda mensaje amistad es amigo, te extraño amigo) se iba a conectar a un dashboard de computador que estaba en otra casa 02 y iba a mostrar el mensaje en un bloque stream y de texto, para luego que nuestro arduino 02 recibiera este mensaje y lo imprimiera en la pantalla oled. este fue el proceso más larguísimo de todos. El primer paso lo intentamos al revés, ósea el arduino 02 conectando al dashboard de la casa 01, intentamos de todo, cambiar feed, abrir el feed porque aparecía ese candado bloqueado, dejar el arduino quito por varios minutos a ver si quizás se demoraba por la distancia, pero nada. lo bueno es que si buscaba información en adafruit pero nunca conectó, entonces probamos al revés, que es la primera opción que se mencionó, hicimos que el arduino 01 se conectara a un dahboard a través del feed mensaje2, y logró mostrar el mensaje en el dashboard. una vez completado eso, conectamos la pantalla oled (ambos arduinos estaban conectados al mismo usuario y key de adafruit) en tutoriales vimos que si o si debía dar el mensaje de recibido, la primera parte de este codigo era sobre la pantalla oled, su configuración de tamaño tipográfico y el código principal para recibir el mensaje era este: Serial.println(io.statusText()); así chatgpt nuevamente nos ayudó con la sintaxis y lo logramos, fue maravilloso, mejor aprendizaje jjj muchas gracias aron y mateooo.

## código usado con Adafruit IO

### código para enviar

```cpp
// rellenar
```

### código para recibir

```cpp
// rellenar
```

## investigaciones individuales

rellenar en el mismo orden que los integrantes del grupo

[persona-01.md](./persona-01.md) 
[persona-02.md](./persona-02.md)
[persona-03.md](./persona-03.md)

## bibliografía
