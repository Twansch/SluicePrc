#include "Sluice.h"



		Sluice::Sluice(Door leftDoor, Door rightDoor, Communication* comm)
		{
			Sluice::communication = comm;
			
		}

		Door::WaterLevel Door::GetWaterHeight()
		{
			WaterLevel waterLevel = High;

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
				*/   
				 //instead of High get message
				return waterLevel;
		}

		void OpenDoor(Door door)
		{


			//door.GetWaterLevel

		}
		void CloseDoor(Door door)
		{
		}


		void SetLight(TrafficLight light)
		{
			WaterLevel w = GetWaterHeight();


			
			if(w == Low && leftDoor.GetDoorState() == open){
	if (SluiceWatch.VrijgevenVoorInvaren() == true){
		SetCurrentColour(Green, 1);
		SetCurrentColour(Red, 2);
		SetCurrentColour(Red, 3);
		SetCurrentColour(Red, 4);
		
	}
	elseif(SluiceWatch.VrijgevenVoorUitvaren() == true){
		SetCurrentColour(Red, 1);
		SetCurrentColour(Green, 2);
		SetCurrentColour(Red, 3);
		SetCurrentColour(Red, 4);
	}

}

elseIf(w == High && rightDoor.GetDoorState() == open){
	if (VrijgevenVoorUitvaren == true){
		SetCurrentColour(Red, 1);
		SetCurrentColour(Red, 2);
		SetCurrentColour(Green, 3);
		SetCurrentColour(Red, 4);		
	}
	elseif(VrijgevenVoorInvaren == true){
		SetCurrentColour(Red, 1);
		SetCurrentColour(Red, 2);
		SetCurrentColour(Red, 3);
		SetCurrentColour(Green, 4);		
	}


}

else{
		SetCurrentColour(Red, 1);
		SetCurrentColour(Red, 2);
		SetCurrentColour(Red, 3);
		SetCurrentColour(Red, 4);
		
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
