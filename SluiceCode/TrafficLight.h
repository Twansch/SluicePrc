#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "Communication.h"


class TrafficLight
{
	public:
		TrafficLight(Communication* comm);
		enum LightColour {Red, Green};
		LightColour currentColour;
		LightColour GetCurrentColour();
		void SetCurrentColour(LightColour lightColour, int lightNumber);
		//void On(int lightNumber);
		//void Off(int lightNumber);
		Communication* communication;
};

#endif
