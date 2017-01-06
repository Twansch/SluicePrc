class Door
{
	public: // use protected instead of private when DoorMotor and DoorLock need it
		enum Doorstate {OPEN, CLOSED, OPENING, CLOSING, LOCKED, ENGINEDAMAGE, STOPPED}
		DoorState state
		Valve lowValve;
		Valve midValve;
		Valve highValve;
		DoorState GetDoorState();
		void SetDoorState();
		void CheckWaterHeight();
		void SetValve(Valve valve);
}
