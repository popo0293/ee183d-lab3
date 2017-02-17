int reading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(A0);
  Serial.println(reading);
  delay(200);
}
