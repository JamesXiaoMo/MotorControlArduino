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

//Mode: DC_MOTOR_Forward, DC_MOTOR_Backward, DC_MOTOR_Brake, DC_MOTOR_Stop
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

void Stepping_Motor_Control_Test(){
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, HIGH);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_1, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, HIGH);

  digitalWrite(DC_STEPPING_MOTOR_PIN_3, HIGH);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_3, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, HIGH);
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);  //TX1: 18, RX1: 19

  pinMode(DC_MOTOR_CONTROL_PIN_1, OUTPUT);
  pinMode(DC_MOTOR_CONTROL_PIN_2, OUTPUT);

  pinMode(DC_STEPPING_MOTOR_PIN_1, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_2, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_3, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_4, OUTPUT);
}

void loop() {
  delay(1000);
}