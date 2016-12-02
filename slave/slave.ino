#include <Wire.h>
#include <NewPing.h>
#define TRIGGER_PIN   12  
#define ECHO_PIN      11  
#define MAX_DISTANCE  200 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
int value = 0;

void setup() {
  Wire.begin(8);                
  Wire.onRequest(requestEvent); 
}

void loop() {
  delay(1000);
  value = sonar.ping_cm();
}


void requestEvent() {
  Wire.write(value);
}
