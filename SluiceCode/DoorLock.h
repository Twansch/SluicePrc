class DoorLock: public Door 
{
	public:
		enum LockState {LOCKWORKING, LOCKDAMAGED}
		void SetDoorLock(); //[Left|Right]:[on|off] ack
		LockState GetDoorLockState();//[Left|Right]
}
