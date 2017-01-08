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
		
		Door::WaterLevel Door::GetWaterHeight()
		{
			/*GetWaterLevel water level, which is:
				- low
				- belowValve2
				- aboveValve2
				- aboveValve3
				- high
				*/   
				WaterLevel waterLevel = High; //instead of High get message
				return waterLevel;
		}
		void Door::SetValve(Valve valve)
		{
		}
		
