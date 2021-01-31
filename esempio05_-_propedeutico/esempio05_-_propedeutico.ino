void setup() {
  Serial.begin(9600); //configuro la trasmissione seriale
}

void loop() {
  Serial.println("Ciao"); // trasmetto al PC tramite porta USB la parola "Ciao"
  delay(5000);
}
