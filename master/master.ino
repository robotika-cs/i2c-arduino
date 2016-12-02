#include <Wire.h>

void setup() {
  Wire.begin();       
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
}

void loop() {
  Wire.requestFrom(8, 1);    

  while (Wire.available()) {
    int c = Wire.read();
    if (c > 10){
      digitalWrite(13, HIGH);
    }
    else{
      digitalWrite(13, LOW);
    }
    Serial.println(c);         
  }

  delay(1000);
}
