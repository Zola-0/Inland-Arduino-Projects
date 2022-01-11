void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float value = analogRead(A0);

  float celsius = value * 0.48828125;
  Serial.print("Temperature is: ");
  Serial.print(celsius);
  Serial.print("C");
  Serial.println();

  delay(1000);
}
