#include <Arduino.h>

#define DC_STEPPING_MOTOR_PIN_1 5
#define DC_STEPPING_MOTOR_PIN_2 6
#define DC_STEPPING_MOTOR_PIN_3 7
#define DC_STEPPING_MOTOR_PIN_4 8


void L1(){
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_3, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_1, HIGH);
}

void L2(){
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_3, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_2, HIGH);
}

void L3(){
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_3, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_3, HIGH);
}

void L4(){
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_3, LOW);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, LOW);

  digitalWrite(DC_STEPPING_MOTOR_PIN_4, HIGH);
}

void step(int a, int b, int c, int d) {
  digitalWrite(DC_STEPPING_MOTOR_PIN_1, a);
  digitalWrite(DC_STEPPING_MOTOR_PIN_2, b);
  digitalWrite(DC_STEPPING_MOTOR_PIN_3, c);
  digitalWrite(DC_STEPPING_MOTOR_PIN_4, d);
  delay(25);
}

//時計回りに回転
void RotateClockwise(){
  L4();
  delay(25);
  L2();
  delay(25);
  L3();
  delay(25);
  L1(); 
  delay(25);
}

//反時計回り回転
void RotateCounterclockwise(){
  L1();
  delay(25);
  L3();
  delay(25);
  L2();
  delay(25);
  L4();
  delay(25);
}

void initSteppingMotor(){
  pinMode(DC_STEPPING_MOTOR_PIN_1, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_2, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_3, OUTPUT);
  pinMode(DC_STEPPING_MOTOR_PIN_4, OUTPUT);
}