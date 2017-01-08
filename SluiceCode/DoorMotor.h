#ifndef DOORMOTOR_H
#define DOORMOTOR_H

#include "Door.h"

class DoorMotor: public Door 
{
	public:
		DoorMotor(Communication* comm);
		void SetDoorState();
		void Open();
		void Close();
		
};

#endif
