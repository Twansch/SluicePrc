class Sluice
{
	public:
		Door::Door leftDoor;
		Door::Door rightDoor;
		TrafficLight::TrafficLight leftLightIn;
		TrafficLight::TrafficLight leftLightOut;
		TrafficLight::TrafficLight rightLightIn;
		TrafficLight::TrafficLight rightLightOut;
		void Sluice(port);
		void OpenDoor(Door door);
		void CloseDoor(Door door);
		void SetLight(TrafficLight light);
	
	private:
		int Port;


}
