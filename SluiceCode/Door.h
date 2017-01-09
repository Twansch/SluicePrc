#ifndef DOOR_H
#define DOOR_H

#include "Valve.h"
#include "Communication.h"

class Door
{
	public: // use protected instead of private when DoorMotor and DoorLock need it
		Door(Communication* comm);
		enum DoorState {OPEN, CLOSED, OPENING, CLOSING, LOCKED, ENGINEDAMAGE, STOPPED};
		
		DoorState state;
		Valve* lowValve;
		Valve* midValve;
		Valve* highValve;
		DoorState GetDoorState();
		void SetDoorState(DoorState doorState);
		
		void SetValve(Valve valve);
		void Open();
		void Close();
		Communication* communication;
};

#endif
