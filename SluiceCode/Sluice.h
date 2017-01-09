#ifndef SLUICE_H
#define SLUICE_H

#include "Door.h"
#include "TrafficLight.h"
#include "Communication.h"


class Sluice
{
	public:
		Sluice(Door leftDoor, Door rightDoor, Communication* comm);
		Door* LeftDoor;
		Door* RightDoor;
		TrafficLight* leftLightIn;
		TrafficLight* leftLightOut;
		TrafficLight* rightLightIn;
		TrafficLight* rightLightOut;

		//bool waterHigh;
		//bool waterLow;

		enum WaterLevel {Low, BelowValve2, AboveValve2, AboveValve3, High};
		WaterLevel GetWaterHeight();

		void OpenDoor();
		void CloseDoor();
		void Schutten();
		void SetLightIn();
		void SetLightOut();
		Communication* communication;
	
	private:
		int Port;
		
};

#endif
