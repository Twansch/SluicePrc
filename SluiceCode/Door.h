#ifndef DOOR_H
#define DOOR_H

#include "Valve.h"
#include "Communication.h"

class Door
{
	public: // use protected instead of private when DoorMotor and DoorLock need it
		Door();
		enum DoorState {OPEN, CLOSED, OPENING, CLOSING, LOCKED, ENGINEDAMAGE, STOPPED};
		enum WaterLevel {Low, BelowValve2, AboveValve2, AboveValve3, High};
		DoorState state;
		Valve lowValve;
		Valve midValve;
		Valve highValve;
		DoorState GetDoorState();
		void SetDoorState(DoorState doorState);
		WaterLevel GetWaterHeight();
		void SetValve(Valve valve);
		void Open();
		void Close();
};

#endif
