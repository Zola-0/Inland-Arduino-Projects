int outputPin = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
//  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float analogPin = analogRead(A1);
  
  float pwm_percent = 255*(analogPin /1023);
//  float period = 40;
//  float dc = period * (pwm_percent/255);

  analogWrite(outputPin, pwm_percent);
  
//  digitalWrite(outputPin, HIGH);
//  delay(dc);
//  digitalWrite(outputPin, LOW);
//  delay(period - dc);
  
  Serial.print(analogPin);
  Serial.print(" ");
  Serial.println(pwm_percent);
}
