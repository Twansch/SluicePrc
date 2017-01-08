#ifndef DOORMOTOR_H
#define DOORMOTOR_H

class DoorMotor: public Door 
{
	public:
		DoorMotor();
		void SetDoorState();
		void Open();
		void Close();
}

#endif
