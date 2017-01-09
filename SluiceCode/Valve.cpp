#include "Valve.h"

		
		Valve::Valve(Communication* comm)
		{
			communication = comm;
		}
		void Valve::Open(int valveNumber, int doorNumber)
		{
				char const * message;
				if(valveNumber == 1)
				{
					if(doorNumber == 1)
					{
				message = "SetDoorLeftValve1:open;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve1:open;";
				}
				else if(valveNumber == 2)
				{
							if(doorNumber == 1)
					{
				message = "SetDoorLeftValve2:open;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve2:open;";
				}
				}
				else if (valveNumber == 3)
				{
								if(doorNumber == 1)
					{
				message = "SetDoorLeftValve3:open;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve3:open;";
				}
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
								if(returnString == "ack;")
				{
				}
				else
				{
					//Something went wrong!
				}
			}
			

			//Sendmessage Set valve open
			//Check for Ack
		}
		void Valve::Close(int valveNumber, int doorNumber)
		{
							char const * message;
				if(valveNumber == 1)
				{
					if(doorNumber == 1)
					{
				message = "SetDoorLeftValve1:close;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve1:close;";
				}
				else if(valveNumber == 2)
				{
							if(doorNumber == 1)
					{
				message = "SetDoorLeftValve2:close;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve2:close;";
				}
				}
				else if (valveNumber == 3)
				{
								if(doorNumber == 1)
					{
				message = "SetDoorLeftValve3:close;";
			}
			else if(doorNumber == 2)
			{
				message = "SetDoorRightValve3:close;";
				}
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
								if(returnString == "ack;")
				{
				}
				else
				{
					//Something went wrong!
				}
			}

			//Sendmessage set valve closed
			//Check for Ack
		}

