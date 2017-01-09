#include "Sluice.h"



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

		/*Door::WaterLevel Door::GetWaterHeight()
		{
			Door::WaterLevel waterLevel = High;

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


			/*GetWaterLevel water level, which is:
				- low
				- belowValve2
				- aboveValve2
				- aboveValve3
				- high

				 //instead of High get message
				return waterLevel;
		}*/
		void OpenDoor(Door door)
		{

			//door.GetWaterLevel

		}
		void CloseDoor(Door door)
		{
		}


		void SetLightIn()
		{
			Door::WaterLevel w = Door::GetWaterHeight();


			
			if(w == Low && Sluice::LeftDoor.GetDoorState() == open){
	
		leftLightIn.SetCurrentColour(Green, 1);
		leftLightOut.SetCurrentColour(Red, 2);
		rightLightOut.SetCurrentColour(Red, 3);
		rightLightIn.SetCurrentColour(Red, 4);
		
	}
	else if(w == High && Sluice::RightDoor.GetDoorState() == open){
		leftLightIn.SetCurrentColour(Red, 1);
		leftLightOut.SetCurrentColour(Red, 2);
		rightLightOut.SetCurrentColour(Red, 3);
		rightLightIn.SetCurrentColour(Green, 4);
	}
	else{
		leftLightIn.SetCurrentColour(Red, 1);
		leftLightOut.SetCurrentColour(Red, 2);
		rightLightOut.SetCurrentColour(Red, 3);
		rightLightIn.SetCurrentColour(Red, 4);
		
}
}

void SetLightOut()
		{
			Door::WaterLevel w = Door::GetWaterHeight();

if(w == High && Sluice::RightDoor.GetDoorState() == open){

		leftLightIn.SetCurrentColour(Red, 1);
		leftLightOut.SetCurrentColour(Red, 2);
		rightLightOut.SetCurrentColour(Green, 3);
		rightLightIn.SetCurrentColour(Red, 4);		
	}
else if(w == Low && Sluice::LeftDoor.GetDoorState() == open){
		leftLightIn.SetCurrentColour(Red, 1);
		leftLightOut.SetCurrentColour(Green, 2);
		rightLightOut.SetCurrentColour(Red, 3);
		rightLightIn.SetCurrentColour(Red, 4);
	}
	else{
		leftLightIn.SetCurrentColour(Red, 1);
		leftLightOut.SetCurrentColour(Red, 2);
		rightLightOut.SetCurrentColour(Red, 3);
		rightLightIn.SetCurrentColour(Red, 4);
		
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
			
		}
