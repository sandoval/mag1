
/*
  AnalogReadSerial
 Reads an analog input on pin 0, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

#define READS 800
#define WAIT 2

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

int buffer[READS];
int i = 0;
int j = 0;
void loop() {
  if(i<READS) {
    int sensorValue = analogRead(A0);
    buffer[i] = sensorValue;
    delay(WAIT);
    i++;
  }
  if(i == READS) {
    if(Serial.available() > 0) {
      char s = Serial.read();
      Serial.println(buffer[j], DEC);
      j++;
    }
  }
}

