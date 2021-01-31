void setup() {
  pinMode(13, OUTPUT);            //configuro il pin 13 come output (dove c'è il LED)
  pinMode(12, INPUT_PULLUP);      //configuro il pin 12 come input (dove c'è il pulsante)
}

void loop() {

  if (digitalRead(12) == LOW){ //il pulsante è premuto?
    //sì, è premuto
    digitalWrite(13, HIGH); //accendo il led 
    delay(5000); //ed aspetto 5 secondi
  } else {
    //no, non lo è
    digitalWrite(13,LOW); //spengo il led
  }
}
