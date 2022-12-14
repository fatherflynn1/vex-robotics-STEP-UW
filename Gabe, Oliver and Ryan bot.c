#pragma config(Sensor, dgtl1,  frontSensor,    sensorTouch)
#pragma config(Sensor, dgtl2,  rightSensor,    sensorTouch)
#pragma config(Sensor, dgtl3,  leftSensor,     sensorTouch)
#pragma config(Motor,  port2,           frontRightMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           frontLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           PanelMotor,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           ElevatorTopMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           backLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port8,           backRightMotor, tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	int condition = 0;
	while(vexRT[Btn8U]==0){

	}
 	while(1 == 1) {

  //Front Sensor Control
  	if (SensorValue(frontSensor) == 1) {
    	motor[frontRightMotor] = -30;
    	motor[backRightMotor]  = -30;
      motor[frontLeftMotor] = -30;
    	motor[backLeftMotor]  = -30;
    	wait1Msec(1500);
		} else if(SensorValue(rightSensor) == 1) {
    	motor[frontRightMotor] = 30;
    	motor[backRightMotor]  = 30;
      motor[frontLeftMotor] = -30;
    	motor[backLeftMotor]  = -30;
    	wait1Msec(250);
  	} else if (SensorValue(leftSensor) == 1) {
    	motor[frontRightMotor] = -30;
    	motor[backRightMotor]  = -30;
      motor[frontLeftMotor] = 30;
    	motor[backLeftMotor]  = 30;
    	wait1Msec(250);
    } else {
     	motor[frontRightMotor] = 30;
   		motor[backRightMotor]  = 30;
     	motor[frontLeftMotor] = 30;
   		motor[backLeftMotor]  = 30;
 	 }

 	 if(vexRT[Btn8D] == 1) {
 	   condition = 1;
 	 }

 	 while(condition == 1) {
 	 		motor[frontRightMotor] = 0;
   		motor[backRightMotor]  = 0;
     	motor[frontLeftMotor] = 0;
   		motor[backLeftMotor]  = 0;
   		if(vexRT[Btn8U]==1){
   			condition = 0;
   		}
 	 }



 }
}

