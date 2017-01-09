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
				std::stringstream ssGreen;
				std::stringstream ssRed;

				ssGreen << "SetTrafficLight" << lightNumber << "Green:on;";
				ssRed << "SetTrafficLight" << lightNumber << "Red:off;";


				communication->SendAndReceive(ssGreen);
				communication->SendAndReceive(ssRed);
			}
			else if(lightColour == Red)
			{
				std::stringstream ssGreen;
				std::stringstream ssRed;

				ssGreen << "SetTrafficLight" << lightNumber << "Green:off;";
				ssRed << "SetTrafficLight" << lightNumber << "Red:on;";

				communication->SendAndReceive(ssGreen);
				communication->SendAndReceive(ssRed);
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
