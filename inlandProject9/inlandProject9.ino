
void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
}
