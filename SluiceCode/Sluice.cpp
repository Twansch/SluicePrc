#include "Sluice.h"

bool waterLow=false;
bool waterHigh=false;

		Sluice::Sluice(Door leftDoor, Door rightDoor, Communication* comm)
		{
			communication = comm;
			*LeftDoor = leftDoor;
			*RightDoor = rightDoor;
			*leftLightIn = TrafficLight(comm);
			*leftLightOut = TrafficLight(comm);
			*rightLightIn = TrafficLight(comm);
			*rightLightOut = TrafficLight(comm);

		}



		Sluice::WaterLevel Sluice::GetWaterHeight()
		{
			Sluice::WaterLevel waterLevel = High;

			/*switch(waterLevel)
			{
				case low:
				{
					number = 1;
					light.On(number);
				}

				case belowValve2:
				{

				}

				case aboveValve2:
				{

				}

				case aboveValve3:
				{

				}

				case high:
				{

				}
			}*/


			/*etWaterLevel water level, which is:
				- low
				- belowValve2
				- aboveValve2
				- aboveValve3
				- high*/

				 //instead of High get message
				return waterLevel;
		}
		void Sluice::OpenDoor(Door door)
		{
			Sluice::WaterLevel w = Sluice::GetWaterHeight();

			if (w == Low)
			{
				LeftDoor->Open(1);
			}
			else if (w == High)
			{
				RightDoor->Open(2);
			}

			//door.GetWaterLevel

		}
		void Sluice::CloseDoor(Door door)
		{	
			Sluice::WaterLevel w = Sluice::GetWaterHeight();

			if (w == Low)
			{
				LeftDoor->Close(1);
			}
			else if (w == High)
			{
				RightDoor->Close(2);
			}
		}


		void Sluice::SetLightIn()
		{
			Sluice::WaterLevel w = Sluice::GetWaterHeight();


			
			if(w == Low && Sluice::LeftDoor->GetDoorState(1) == Door::doorOpen){
	
		leftLightIn->SetCurrentColour(TrafficLight::Green, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Red, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Red, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Red, 4);
		
	}
	else if(w == High && Sluice::RightDoor->GetDoorState(2) == Door::doorOpen){
		leftLightIn->SetCurrentColour(TrafficLight::Red, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Red, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Red, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Green, 4);
	}
	else{
		leftLightIn->SetCurrentColour(TrafficLight::Red, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Red, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Red, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Red, 4);
		
}
}

void Sluice::SetLightOut()
		{
			Sluice::WaterLevel w = Sluice::GetWaterHeight();

if(w == High && Sluice::RightDoor->GetDoorState(2) == Door::doorOpen){

		leftLightIn->SetCurrentColour(TrafficLight::Red, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Red, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Green, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Red, 4);		
	}
else if(w == Low && Sluice::LeftDoor->GetDoorState(1) == Door::doorOpen){
		leftLightIn->SetCurrentColour(TrafficLight::Red, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Green, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Red, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Red, 4);
	}
	else{
		leftLightIn->SetCurrentColour(TrafficLight::Red, 1);
		leftLightOut->SetCurrentColour(TrafficLight::Red, 2);
		rightLightOut->SetCurrentColour(TrafficLight::Red, 3);
		rightLightIn->SetCurrentColour(TrafficLight::Red, 4);
		
}
	


}


			/*int number = 0;			

			switch(light)
			{
				case leftLightIn:
				{
					number = 1;
					light.On(number);
				}

				case leftLightOut:
				{

				}

				case rightLightOut:
				{

				}


				case rightLightOut:
				{

				}
			}


			if(light == leftLightIn)
		
		TrafficLight::TrafficLight ;
		TrafficLight::TrafficLight rightLightOut;)
			{

			}
			else if (light == leftLightOut)
			{

			}*/
