#ifndef SLUICE_H
#define SLUICE_H

#include "Door.h"
#include "TrafficLight.h"

class Sluice
{
	public:
		Sluice(Door leftDoor, Door rightDoor);
		Door LeftDoor;
		Door RightDoor;
		TrafficLight leftLightIn;
		TrafficLight leftLightOut;
		TrafficLight rightLightIn;
		TrafficLight rightLightOut;
		void OpenDoor(Door door);
		void CloseDoor(Door door);
		void SetLight(TrafficLight light);
	
	private:
		int Port;


};

#endif
