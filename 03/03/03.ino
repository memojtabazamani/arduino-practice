int led=2;
int delayBlink = 50;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  while(true) {
     digitalWrite(led, HIGH);
    delay(delayBlink);
       digitalWrite(led, LOW);

    delay(delayBlink);   
  }
}
