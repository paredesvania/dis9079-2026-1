// ejemplo00
// imprime la sigla del curso en el monitor serial
// luego espera 1 segundo e imprime :)
// funciona con Arduino Uno R4 WiFi
// marzo 2026
// por montoyamoraga para disenoUDP

void setup() {
  // iniciar puerto serial
  Serial.begin(9600);
}

void loop() {
  // imprimir en consola
  Serial.println("dis9079");
  // esperar un segundo
  delay(1000);

  // imprimir en consola
  Serial.println(":)");
  // esperar un segundo
  delay(1000);
}