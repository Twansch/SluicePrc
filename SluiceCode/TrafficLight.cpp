#include "TrafficLight.h"
#include <iostream>
#include <sstream>
#include <stdio.h>



		TrafficLight::TrafficLight()
		{

		}

		TrafficLight::LightColour GetCurrentColour(int lightNumber)
		{
			std::cout << "GetTrafficLight" << lightNumber << std::endl;
			TrafficLight::LightColour returnColour /*= Red*/;
			return returnColour;
			
		}

		void TrafficLight::SetCurrentColour(LightColour lightColour)
		{
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

		void TrafficLight::On(int lightNumber)
		{
			/*LightColour c = GetCurrentColour(lightNumber);
			//SetCurrentColour(c);
			if(c == Red)
			{
				c = Green;
			}
			else if(c == Green)
			{
				c = Red;
			}
			

			std::cout << "SetTrafficLight" << lightNumber << lightColour << "On" << std::endl;*/
		}

		void TrafficLight::Off(int lightNumber)
		{
			std::cout << "SetTrafficLight" << lightNumber << "Off" << std::endl;
		}

