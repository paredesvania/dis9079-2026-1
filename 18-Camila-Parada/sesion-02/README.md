
# ⋆⭒˚.⋆ Github, Discord, VS code & Arduino ⋆.˚⭒⋆

Lunes 16 de Marzo 2026

***

## Observaciones

Para este módulo hubo que formar equipos de 3 personas para la primera solemne. En mi caso, no sabía con quién trabajar, pero ante una pregunta del profesor me di cuenta de que mi compañera [Vania Paredes](https://github.com/paredesvania) también estaba sola, por lo que nos juntamos junto con [Felipe Caurapan](https://github.com/felipecaurapan) para comenzar a trabajar.

<!-- Palabra dudosa del dia: Tocaya --> 

***

## Github

Como primera parte comenzamos a ver alguns detalles de Github.
Cómo poner estos íconos para poner otros lenguajes dentro del markdown "``` nombre del lenguaje"

### Ejemplo: mermaid (ver código)

``` mermaid

flowchart TD
    A[Christmas] -->|Get money| B(Go shopping)
    B --> C{Let me think}
    C -->|One| D[Laptop]
    C -->|Two| E[iPhone]
    C -->|Three| F[fa:fa-car Car]

```

A la par se nos compartió una web para aprender a escribir en [markdown](https://docs.github.com/es/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax). Y se nos compartió otra [herramienta](https://pandoc.org) para poder ir exportando estos archivos como pdf u otros.

***

## Arduino IDE

Se nos informó que posiblemente este sería el último curso en el que se enseñaría esta tecnología, puesto que el proyecto fue comprado por una empresa y sus políticas fueron cambiadas. Se nos informó sobre una organización llamada ["OSHWA"](https://oshwa.org) en la que se centra en certificar proyectos Open source de tipo Hardware.

Para quien tenga el programa instalado solo se debe de actualizar.

En la parte de "Administración de placas" hay que instalar la "R4 Boards".
A la par se han de instalar "Bibliotecas": "Arduino MQTTClient" (Arduino) y "Arduino Graphics" ()

Acerca de las versiones, se han de manejar según este tipo de numerología ["Versionamiento Semántico"](https://semver.org/lang/es/) "0.0.0". El último dígito indica un número que cuando asciende significa que han arreglado errores de las versiones anteriores. Al medio signifa que ha sido un cambio significativo de la versión, y ya el primer dígito indica que es una versión nueva que deja de ser compatible con la anterior.

Los arduinos R3 poseen un chip "atmega328p" (2011). Estos se manejan en millis/ milisegundos.
El 2024 es que llegaron los R4 tipo mínima y los [R4 wifi](https://mcielectronics.cl/shop/product/43402).

***

## Revisando el ejemplo 

Para esta clase, Aarón preparó una serie de ejemplos para poder utilizar con el Arduino R4. Se nos empezó a explicar el funcionamiento del código a través de la placa.

***

## Links varios

- https://github.com/eclipse-mosquitto/mosquitto
- https://mechanic.design
- https://art.cmu.edu/news/school/drawing-with-machines-artworks/
