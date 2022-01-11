#include <IRremote.hpp>
#define button_1 0xFF6897
#define button_2 0xFF9867
#define button_3 0xFFB04F
#define button_4 0xFF30CF
#define button_5 0xFF18E7
#define button_6 0xFF7A85

int array[] = {0,0,0,0,0,0};


int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
      Serial.println(results.value, HEX);
      irrecv.resume(); // Receive the next value
  }

  switch(results.value){
    case button_1:
      if (array[1] == 1){
        digitalWrite(7, LOW);
        array[1] = 0;
      }else{
        digitalWrite(7, HIGH);
        array[1] = 1;
      }
      break;
    case button_2:
      if (array[2] == 1){
        digitalWrite(6, LOW);
        array[2] = 0;
      }else{
        digitalWrite(6, HIGH);
        array[2] = 1;
      }
      break;
    case button_3:
      if (array[3] == 1){
        digitalWrite(5, LOW);
        array[3] = 0;
      }else{
        digitalWrite(5, HIGH);
        array[3] = 1;
      }
      break;
    case button_4:
      if (array[4] == 1){
        digitalWrite(4, LOW);
        array[4] = 0;
      }else{
        digitalWrite(4, HIGH);
        array[4] = 1;
      }
      break;
    case button_5:
      if (array[5] == 1){
        digitalWrite(3, LOW);
        array[5] = 0;
      }else{
        digitalWrite(3, HIGH);
        array[5] = 1;
      }
      break;
    case button_6:
      if (array[2] == 1){
        digitalWrite(2, LOW);
        array[2] = 0;
      }else{
        digitalWrite(2, HIGH);
        array[2] = 1;
      }
      break;
  }
}
