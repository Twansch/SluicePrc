#include "SluiceWatch.h"
#include <stdio.h>

		SluiceWatch::SluiceWatch()
		{
			
		}
		
		void AddSluice(Sluice sluice)
		{	
				//sluices.push_back(sluice);
		}
		
		void VrijgevenVoorInvaren()
		{
			
			//check which side the waterlevels are equal
			//check if the door on that side is fully opened
			//Make these checks polling so it will wait till the door is totally opened
			//Set trafficlight green 
		}
		void VrijgevenVoorUitvaren()
		{
			//check which side the waterlevels are equal
			//check if the door on that side is fully opened
			//Make these checks polling so it will wait till the door is totally opened
			//Set trafficlight green 
		}
		void StartSchut()
		{
			//De geopende deuren van sluis, daar waar de waterstand aan beide zijden gelijk is, worden dan
			//gesloten.
			//Door.StartValveProcess
			//Double Check water level 
			//Start opening door
		}
		void AlarmMode()
		{
			//if(Doorleft and DoorRight are closed) Close all valves
			//if(Doorleft and/or Doorright are opening or closing) Stop all movement
			//Wait till button herstel is pressed
		}

