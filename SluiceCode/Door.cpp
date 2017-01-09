#include "Door.h"

		Door::Door(Communication* comm)
		{
			communication = comm;
			*lowValve = Valve(comm);
			*midValve = Valve(comm);
			*highValve = Valve(comm);
		}
		Door::DoorState Door::GetDoorState(int doorNumber)
		{
			Door::DoorState d;
			switch(doorNumber)
			{
			case 1:
			{

				d = communication->SendAndReceive("GetDoorLeft");
				break;
			}
			case 2:
			{
				d = communication->SendAndReceive("GetDoorRight");
				break;
			}
			default:
			{
				break;
			}
			}

			return d;
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
		
