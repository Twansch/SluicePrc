#include "Valve.h"

		
		Valve::Valve(Communication* comm)
		{
			communication = comm;
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

