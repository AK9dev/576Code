#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	wait1Msec(2000);

	SensorValue[rightEncoder] = 0;
	SensorValue[leftEncoder] = 0;

	while(SensorValue[rightEncoder] < 720)
{

motor[rightMotor] = 63;
motor[leftMotor] = 63;

	}


}
