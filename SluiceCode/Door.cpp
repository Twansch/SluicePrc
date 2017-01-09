#include "Door.h"

		Door::Door(Communication* comm)
		{
			communication = comm;
			*lowValve = Valve(comm);
			*midValve = Valve(comm);
			*highValve = Valve(comm);
		}
		Door::DoorState Door::GetDoorState()
		{
			communication->SendAndReceive("GetDoorState");

			//Sendmessage get door state
			//return doorstate
		}
		void Door::SetDoorState(DoorState doorState)
		{
			//send doorState
			//check Ack
		}
		
		void Door::Open()
		{
			//
		}
		
		void Door::Close()
		{
		}
		
		
		void Door::SetValve(Valve valve)
		{
		}
		
