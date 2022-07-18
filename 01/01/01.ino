int led = 3;
char ch;

void setup() {
  Serial.begin(9600);
  pinMode(led,  OUTPUT);
}

void loop() {
  while(Serial.available())
  {
    ch = Serial.read();
    if (ch == '1') {
      digitalWrite(led, HIGH); // Turn On LED
    } else if (ch == '0') {
      digitalWrite(led, LOW); // Turn Off LED
    }
  }
}
