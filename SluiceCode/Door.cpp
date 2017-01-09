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
				char * returnString;
				communication->SendAndReceive("GetDoorLeft", returnString);
				if(returnString == "doorOpen")
				{
					d = doorOpen;
					return d;
				}
				break;
			}
			case 2:
			{
				char * returnString;
				communication->SendAndReceive("GetDoorRight", returnString);
				if(returnString == "doorOpen")
				{
					d = doorOpen;
					return d;
				}				break;
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
		
		void Door::Open(int doorNumber)
		{
			char const * message;

					if(doorNumber == 1)
					{
				message = "SetDoor1:open;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoor2:open;";
				}

							

				char * returnString;
				communication->SendAndReceive(message, returnString);
				if(returnString == "ack;")
				{
				}
				else
				{
					//Something went wrong!
				}
				communication->SendAndReceive(message, returnString);
								
			
			

			//
		}
		
		void Door::Close(int doorNumber)
		{
			char const * message;

					if(doorNumber == 1)
					{
				message = "SetDoor1:close;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoor2:close;";
				}

							

				char * returnString;
				communication->SendAndReceive(message, returnString);
				if(returnString == "ack;")
				{
				}
				else
				{
					//Something went wrong!
				}
				communication->SendAndReceive(message, returnString);


		}
		
		
		void Door::SetValve(Valve valve)
		{

		}
		
