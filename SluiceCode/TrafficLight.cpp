#include "TrafficLight.h"
#include <iostream>
#include <sstream>
#include <stdio.h>



		TrafficLight::TrafficLight(Communication* comm)
		{
			communication = comm;
		}

		TrafficLight::LightColour GetCurrentColour(int lightNumber)
		{
			std::cout << "GetTrafficLight" << lightNumber << std::endl;
			TrafficLight::LightColour returnColour /*= Red*/;
			return returnColour;
		}

		void TrafficLight::SetCurrentColour(LightColour lightColour, int lightNumber)
		{
			if (lightColour == Green)
			{	
				char const * message;
				if(lightNumber == 1)
				{
				message = "SetTrafficLight1Green:on;";
				}
				else if(lightNumber = 2)
				{
				message = "SetTrafficLight2Red:off;";
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
			else if(lightColour == Red)
			{
				char const * message;
				if(lightNumber == 1)
				{
				message = "SetTrafficLight1Green:off;";
				}
				else if(lightNumber = 2)
				{
				message = "SetTrafficLight2Red:on;";
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

			//SetTrafficLight[1..4][Red|Green]:[on|off]
					
		/*	if(lightColour == Red)
			{
				lightColour = Green;
			}
			else if(lightColour == Green)
			{
				lightColour = Red;
			}*/
			
		}

	/*	void TrafficLight::On(int lightNumber)
		{
			
		//SetTrafficLight3Red:off;
		//SetTrafficLight4Red:on;
		}

		void TrafficLight::Off(int lightNumber)
		{
			std::cout << "SetTrafficLight" << lightNumber << "Off" << std::endl;
		}
*/
