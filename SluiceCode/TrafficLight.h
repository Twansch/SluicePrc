class TrafficLight
{
	public:
		TrafficLight();
		enum LightColour {RED, GREEN}
		LightColour currentColour;
		LightColour GetCurrentColour();
		void SetCurrentColour(LightColour lightColour);
		void On();
		void Off();
}