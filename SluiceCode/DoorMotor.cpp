#include "DoorMotor.h"

	DoorMotor::DoorMotor(Communication* comm) : Door(comm)
	{
			communication = comm;
			*lowValve = Valve(comm);
			*midValve = Valve(comm);
			*highValve = Valve(comm);
	}
