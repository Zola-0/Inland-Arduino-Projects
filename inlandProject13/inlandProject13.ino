void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(A10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A1, HIGH);

  float tiltValue = analogRead(A10);
  Serial.println(tiltValue);
  delay(2000);

  if (tiltValue == 0){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }

}
