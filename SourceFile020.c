#pragma config(Sensor, dgtl4,  frontSensor,    sensorTouch)
#pragma config(Motor,  port2,           frontRightMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           frontLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port8,           backRightMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,           backLeftMotor, tmotorServoContinuousRotation, openLoop)

task main() {
	while(vexRT[Btn8U] == 0){

	}
	while(SensorValue(frontSensor) == 0) {
	motor[frontRightMotor] = 30;
 	motor[backRightMotor]  = 30;
  motor[frontLeftMotor] = 30;
  motor[backLeftMotor]  = 30;
	}

  if (SensorValue(frontSensor) == 1) {
		motor[frontRightMotor] = -25;
 	motor[backRightMotor]  = -25;
  motor[frontLeftMotor] = -25;
 	motor[backLeftMotor]  = -25;
  wait1Msec(750);
  }
}
