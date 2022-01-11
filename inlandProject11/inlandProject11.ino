const int sensorMax = 1024;  // sensor maximum

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flame = analogRead(A0);
  Serial.println(flame);

  if (flame == sensorMax){
    digitalWrite(9, HIGH);
    Serial.println("Fire!!!!!");
  }else{
    digitalWrite(9, LOW);
    Serial.println("No fire");
  }

  delay(200);
}
