#include <Arduino.h>

#define DC_MOTOR_CONTROL_PIN_1 3
#define DC_MOTOR_CONTROL_PIN_2 4

//Mode 0: Forward
//Mode 1: Backward
//Mode 2: Brake
//Mode 3: Stop
//Speed: 0-255
void DC_Motor_Control(int Mode, int Speed){
  switch (Mode){
  case 0:
    analogWrite(DC_MOTOR_CONTROL_PIN_1, Speed);
    digitalWrite(DC_MOTOR_CONTROL_PIN_2, LOW);
    break;
  case 1:
    digitalWrite(DC_MOTOR_CONTROL_PIN_1, LOW);
    analogWrite(DC_MOTOR_CONTROL_PIN_2, Speed);
    break;
  case 2:
    digitalWrite(DC_MOTOR_CONTROL_PIN_1, HIGH);
    digitalWrite(DC_MOTOR_CONTROL_PIN_2, HIGH);
    break;
  case 3:
    digitalWrite(DC_MOTOR_CONTROL_PIN_1, LOW);
    digitalWrite(DC_MOTOR_CONTROL_PIN_2, LOW);
    break;
  default:
    break;
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(DC_MOTOR_CONTROL_PIN_1, OUTPUT);
  pinMode(DC_MOTOR_CONTROL_PIN_2, OUTPUT);
}

void loop() {
  delay(1000);
}