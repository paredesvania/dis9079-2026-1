# sesion-07

lunes 20 abril 2026

---

## Apuntes

`Seremos el grupo 8, mismo grupo:` Sofía Cartes, Monserrat Paredes, Valentina Ruz.

Nos dieron materiales nuevos:

- Potenciómetro: siempre usaremos la patita 2 y uno de los extremos, nunca usar los extremos juntos.
- LDR
- Protoboard
- Servomotor: tiene tres terminales, alimentación, tierra y una señal. La entrada amarilla es lo que mandamos

Apuntes máquinas: libro que están haciendo con misaa sobre el taller de máquinas electrónicas

### Protoboard

- Tiene muchos orificios, donde hay varias áreas, con números y letras, y negativo con positivo.
- El hemisferio derecho e izquierdo, no se intercomunican entre sí.
- Lo que conectas en uno, se repite en todo.

*En la Raspberry PI se utiliza 3.3 voltios*

[TINKERCAD](https://www.tinkercad.com/)

**Cad: computer aided dessing 💋**

<img src="./imagenes/tinkercad_01.png" alt="tinkercad" width="600">

```cpp
// C++ code
//


// queremos que nuestro Arduino
// sea capaz de leer un potenciometro
// conectado a la entrada A0.

int lectura = 0;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  lectura = analogRead(A0);
  Serial.println(lectura);
}
```

Luego lo hicimos en análogo. Conectamos el arduino con el pote y funcionó :)

<img src="./imagenes/arduino_pote.png" alt="tinkercad" width="600">



