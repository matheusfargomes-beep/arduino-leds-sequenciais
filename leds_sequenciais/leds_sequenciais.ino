const byte leds[5] = {8, 9, 10, 11, 12};
const unsigned long tempoAceso = 200; // milissegundos

void setup() {
  // Configura as cinco portas como saidas digitais.
  for (byte i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for (byte i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH); // Acende o LED atual.
    delay(tempoAceso);           // Aguarda 200 ms.
    digitalWrite(leds[i], LOW);  // Apaga antes do proximo.
  }
  // Ao terminar, loop() reinicia automaticamente a sequencia.
}
