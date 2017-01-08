#include "DoorLock.h"

	DoorLock::DoorLock(Communication* comm) : Door(comm)
	{
			communication = comm;
			*lowValve = Valve(comm);
			*midValve = Valve(comm);
			*highValve = Valve(comm);
	}
