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
			/*if (lightColour == Green)
			{
				comm->SendAndReceive("SetTrafficLight" + lightNumber + "Green:on;");
				comm->SendAndReceive("SetTrafficLight" + lightNumber + "Red:off;");
			}
			else if(lightColour == Red)
			{
				comm->SendAndReceive("SetTrafficLight" + lightNumber + "Green:off;");
				comm->SendAndReceive("SetTrafficLight" + lightNumber + "Red:on;");
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
