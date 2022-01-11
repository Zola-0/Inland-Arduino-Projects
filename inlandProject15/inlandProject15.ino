float nums = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float meter = analogRead(A1);
   delay(500);
   Serial.println(meter);
   digitalWrite(13, HIGH);
   delay(500);
   digitalWrite(13, LOW);
   

}
