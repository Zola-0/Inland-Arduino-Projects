void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  // sets the digital pin 13 as output
}

void loop() {
  // put your main code here, to run repeatedly:
 float pwm_percent = 50;
 float period = 10;
 float dc = period * (pwm_percent/100);
 
 digitalWrite(13, HIGH);
 delay(dc);
 digitalWrite(13, LOW);
 delay(period - dc);
}
