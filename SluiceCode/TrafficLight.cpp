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
				message = "SetTrafficLight1Red:off;";
				}
				else if(lightNumber = 2)
				{
				message = "SetTrafficLight2Red:off;";
				message = "SetTrafficLight2Green:on;";
				}
								else if(lightNumber = 3)
				{
				message = "SetTrafficLight3Red:off;";
				message = "SetTrafficLight3Green:on;";
				}
								else if(lightNumber = 4)
				{
				message = "SetTrafficLight4Red:off;";
				message = "SetTrafficLight4Green:on;";
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
				message = "SetTrafficLight1Red:on;";
				}
				else if(lightNumber = 2)
				{
				message = "SetTrafficLight2Red:on;";
				message = "SetTrafficLight2Green:off;";
				}
								else if(lightNumber = 3)
				{
				message = "SetTrafficLight3Red:on;";
				message = "SetTrafficLight3Green:off;";
				}
								else if(lightNumber = 4)
				{
				message = "SetTrafficLight4Red:on;";
				message = "SetTrafficLight4Green:off;";
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
