#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H



class TrafficLight
{
	public:
		TrafficLight();
		enum LightColour {Red, Green};
		LightColour currentColour;
		LightColour GetCurrentColour();
		void SetCurrentColour(LightColour lightColour);
		void On(int lightNumber);
		void Off(int lightNumber);
};

#endif
