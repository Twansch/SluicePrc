#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Door.h"

class DoorLock: public Door 
{
	public:
		DoorLock(Communication* comm);
		void Open();
		void Close();
		enum LockState {LOCKWORKING, LOCKDAMAGED};
		void SetDoorLock(); //[Left|Right]:[on|off] ack
		LockState GetDoorLockState();//[Left|Right]
		
};

#endif
