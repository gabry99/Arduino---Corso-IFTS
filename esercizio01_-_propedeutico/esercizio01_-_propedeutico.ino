void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(7) == LOW){
    delay(5000);
    digitalWrite(11, HIGH);
} else {
 if (digitalRead(5) == LOW){
    Serial.println("Buonasera");
} else {
    digitalWrite(11, LOW);
    }
}}
