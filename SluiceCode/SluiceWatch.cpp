#include "SluiceWatch.h"
#include <stdio.h>


		SluiceWatch::SluiceWatch()
		{
			Sluice firstSluice = ConstructSluice(SluiceFactory::normalSluice, 5555 ); //SluiceType is een enum met de 3 verschillende variaties
			Sluice secondSluice = ConstructSluice(SluiceFactory::normalSluice, 5556 ); //SluiceType is een enum met de 3 verschillende variaties
			Sluice thirdSluice = ConstructSluice(SluiceFactory::lockSluice, 5557 ); //SluiceType is een enum met de 3 verschillende variaties
			Sluice fourthSluice = ConstructSluice(SluiceFactory::motorSluice, 5558); //SluiceType is een enum met de 3 verschillende variaties
			sluices.push_back(firstSluice);
			sluices.push_back(secondSluice);
			sluices.push_back(thirdSluice);
			sluices.push_back(fourthSluice);
		}
		
		void SluiceWatch::AddSluice(Sluice sluice)
		{	
			/*sluices.push_back(firstSluice);
			sluices.push_back(secondSluice);
			sluices.push_back(thirdSluice);
			sluices.push_back(fourthSluice);*/
				//sluices.push_back(sluice);
		}
		
		void SluiceWatch::VrijgevenVoorInvaren(int sluicePortNumber)
		{
			switch(sluicePortNumber)
			{
				case 5555:
				{
					sluices.firstSluice.SetLightIn();
					break;
				}

				case 5556:
				{
					sluices.secondSluice.SetLightIn();
					break;
				}

				case 5557:
				{
					sluices.thirdSluice.SetLightIn();
					break;
				}

				case 5558:
				{
					sluices.fourthSluice.SetLightIn();
					break;
				}

				case default:
				{
					break;
				}
			}

			
			//check which side the waterlevels are equal
			//check if the door on that side is fully opened
			//Make these checks polling so it will wait till the door is totally opened
			//Set trafficlight green 
		}
		
		void SluiceWatch::VrijgevenVoorUitvaren(int sluicePortNumber)
		{

			switch(sluicePortNumber)
			{
				case 5555:
				{
					sluices.firstSluice.SetLightOut();
					break;
				}

				case 5556:
				{
					sluices.secondSluice.SetLightOut();
					break;
				}

				case 5557:
				{
					sluices.thirdSluice.SetLightOut();
					break;
				}

				case 5558:
				{
					sluices.fourthSluice.SetLightOut();
					break;
				}

				case default:
				{
					break;
				}
			}
			//check which side the waterlevels are equal
			//check if the door on that side is fully opened
			//Make these checks polling so it will wait till the door is totally opened
			//Set trafficlight green 
		}

		void SluiceWatch::StartSchut(int sluicePortNumber)
		{
			switch(sluicePortNumber)
			{
				case 5555:
				{
					sluices.firstSluice.Schutten();
					break;
				}

				case 5556:
				{
					sluices.secondSluice.Schutten();
					break;
				}

				case 5557:
				{
					sluices.thirdSluice.Schutten();
					break;
				}

				case 5558:
				{
					sluices.fourthSluice.Schutten();
					break;
				}

				case default:
				{
					break;
				}
			}



			//De geopende deuren van sluis, daar waar de waterstand aan beide zijden gelijk is, worden dan
			//gesloten.
			//Door.StartValveProcess
			//Double Check water level 
			//Start opening door
		}

		void SluiceWatch::AlarmMode()
		{
			//if(Doorleft and DoorRight are closed) Close all valves
			//if(Doorleft and/or Doorright are opening or closing) Stop all movement
			//Wait till button herstel is pressed
		}

