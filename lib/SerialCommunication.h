#include <Arduino.h>

void Serial1Listen(){
  if(Serial1.available()){
    String str = Serial1.readStringUntil('\n');
    Serial.println(str);
  }
}

void Serial1Write(String str){
  Serial1.println(str);
}

void initSerial1(){
  Serial1.begin(115200);  //TX1: 18, RX1: 19
  if (!Serial1) {
    Serial.println("Serial1 not available");
  }else{
    Serial.println("Serial1 available");
  }
}
