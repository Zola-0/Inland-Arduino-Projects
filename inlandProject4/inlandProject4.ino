void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);  
  pinMode(7, OUTPUT);  
  pinMode(10, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(4, LOW);

  for (int x = 0; x < 3; x++){
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
  }

  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);
}
