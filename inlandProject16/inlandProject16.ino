int clearPin = 7;
int serialData = 2;
int shiftClock = 5;
int latchClock = 4;
//int clearBtn = 13;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(clearPin, OUTPUT);
  pinMode(shiftClock, OUTPUT);
  pinMode(latchClock, OUTPUT);
  pinMode(serialData, OUTPUT);
//pinMode(clearBtn, INPUT);

  digitalWrite(clearPin, LOW);
  digitalWrite(clearPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int shiftCount = 0; shiftCount < 256; shiftCount++){

      digitalWrite(latchClock,LOW);
      shiftOut(serialData, shiftClock, MSBFIRST, shiftCount);
      digitalWrite(latchClock, HIGH);

      Serial.print(shiftCount);
//      Serial.print(" ");
//      Serial.println(digitalRead(clearBtn));
      
      delay(500);

//      if (digitalRead(clearBtn)){
//        digitalWrite(clearPin, LOW);
//        digitalWrite(clearPin, HIGH);
//        shiftCount = 0;
//        Serial.println("fuck");
//      }
   }
}
