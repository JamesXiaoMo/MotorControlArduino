#include <DCMotorControl.h>
#include <SteppingMotorControl.h>
#include <SerialCommunication.h>


void setup() {
  Serial.begin(115200);
  initSerial1();
  initDCMotor();
  initSteppingMotor();
}

void loop() {
  //RotateClockwise();
  RotateCounterclockwise();
}