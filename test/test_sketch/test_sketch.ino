void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(A0);
  Serial.print(450);
  Serial.print(",");
  Serial.print(575);
  Serial.print(",");
  Serial.println(reading);
  delay(10);
}