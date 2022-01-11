void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float value = analogRead(A0);
  Serial.println(value);

  if (value > 980){
  digitalWrite(11, HIGH);
  }else{
  digitalWrite(11, LOW);
  }
  
//  digitalWrite(11, value);
}
