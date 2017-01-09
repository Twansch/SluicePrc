#include "SluiceWatch.h"
#include <stdio.h>


		SluiceWatch::SluiceWatch()
		{
			SluiceFactory firstFactory = SluiceFactory(); //Factories should not be re-used because it has ownership of 1 communication object of which we pass pointers
			Sluice firstSluice = firstFactory.ConstructSluice(SluiceFactory::normalSluice, 5555 ); //SluiceType is een enum met de 3 verschillende variaties
			SluiceFactory secondFactory = SluiceFactory();
			Sluice secondSluice = secondFactory.ConstructSluice(SluiceFactory::normalSluice, 5556 ); //SluiceType is een enum met de 3 verschillende variaties
			SluiceFactory thirdFactory = SluiceFactory();
			Sluice thirdSluice = thirdFactory.ConstructSluice(SluiceFactory::lockSluice, 5557 ); //SluiceType is een enum met de 3 verschillende variaties
			SluiceFactory fourthFactory = SluiceFactory();
			Sluice fourthSluice = fourthFactory.ConstructSluice(SluiceFactory::motorSluice, 5558); //SluiceType is een enum met de 3 verschillende variaties
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
					sluices.at(0).SetLightIn();
					break;
				}

				case 5556:
				{
					sluices.at(1).SetLightIn();
					break;
				}

				case 5557:
				{
					sluices.at(2).SetLightIn();
					break;
				}

				case 5558:
				{
					sluices.at(3).SetLightIn();
					break;
				}

				default:
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
					sluices.at(0).SetLightOut();
					break;
				}

				case 5556:
				{
					sluices.at(1).SetLightOut();
					break;
				}

				case 5557:
				{
					sluices.at(2).SetLightOut();
					break;
				}

				case 5558:
				{
					sluices.at(3).SetLightOut();
					break;
				}

				default:
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
					sluices.at(0).Schutten();
					break;
				}

				case 5556:
				{
					sluices.at(1).Schutten();
					break;
				}

				case 5557:
				{
					sluices.at(2).Schutten();
					break;
				}

				case 5558:
				{
					sluices.at(3).Schutten();
					break;
				}

				default:
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

