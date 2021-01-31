void setup() {
    pinMode(13, OUTPUT); //configuro il pin 13 come output
    pinMode(12, OUTPUT); 
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
}

void loop() {
    digitalWrite(13, HIGH); //"accendo" il piedino n°13
    delay(2000); //aspetta 2 secondi
    digitalWrite(13, LOW); //"spengo" il piedino n°13
    delay(2000); //aspetta 2 secondi
    digitalWrite(12, HIGH);
    delay(2000);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
    delay(2000);
    digitalWrite(10, HIGH);
    delay(2000);
    digitalWrite(10, LOW);
    delay (2000);
}
