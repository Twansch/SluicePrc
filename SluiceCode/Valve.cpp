#include "Valve.h"

		
		Valve::Valve(Communication* comm)
		{
			Valve::communication = comm;
		}
		void Valve::Open()
		{
			//Sendmessage Set valve open
			//Check for Ack
		}
		void Valve::Close()
		{
			//Sendmessage set valve closed
			//Check for Ack
		}

