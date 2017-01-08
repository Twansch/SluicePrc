#ifndef DOORMOTOR_H
#define DOORMOTOR_H

#include "Door.h"

class DoorMotor: public Door 
{
	public:
		DoorMotor();
		void SetDoorState();
		void Open();
		void Close();
};

#endif
