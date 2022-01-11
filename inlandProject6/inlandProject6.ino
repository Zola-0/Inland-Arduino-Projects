int LED = 11;
int button = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(button);
  digitalWrite(LED, LOW);
  if (btn == HIGH){
    digitalWrite(LED, HIGH);
  }
  Serial.println(btn);
}
