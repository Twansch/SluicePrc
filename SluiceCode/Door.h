#ifndef DOOR_H
#define DOOR_H

#include "Valve.h"
#include "Communication.h"

class Door
{
	public: // use protected instead of private when DoorMotor and DoorLock need it
		Door(Communication* comm);
		enum DoorState {doorOpen, doorClosed, doorOpening, doorClosing, doorLocked, motorDamage, doorStopped};
		
		DoorState state;
		Valve* lowValve;
		Valve* midValve;
		Valve* highValve;
		DoorState GetDoorState(int doorNumber);
		void SetDoorState(DoorState doorState);
		
		void SetValve(Valve valve);
		void Open();
		void Close();
		Communication* communication;
};

#endif
