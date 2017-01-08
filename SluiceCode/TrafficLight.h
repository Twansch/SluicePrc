#ifndef TRAFFICLIGHT_H
#define TRAFFIClIGHT_H

#include "TrafficLight.h"

class TrafficLight
{
	public:
		TrafficLight();
		enum LightColour {Red, Greed}
		LightColour currentColour;
		LightColour GetCurrentColour();
		void SetCurrentColour(LightColour lightColour);
		void On();
		void Off();
}

#endif
