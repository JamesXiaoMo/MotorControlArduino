#include <Arduino.h>


#define DC_MOTOR_CONTROL_PIN_1 3
#define DC_MOTOR_CONTROL_PIN_2 4

#define DC_MOTOR_Forward 0
#define DC_MOTOR_Backward 1
#define DC_MOTOR_Brake 2
#define DC_MOTOR_Stop 3


#define DC_STEPPING_MOTOR_PIN_1 5
#define DC_STEPPING_MOTOR_PIN_2 6
#define DC_STEPPING_MOTOR_PIN_3 7
#define DC_STEPPING_MOTOR_PIN_4 8


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