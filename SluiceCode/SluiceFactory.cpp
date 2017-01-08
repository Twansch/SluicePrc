#include "SluiceFactory.h"



	SluiceFactory::SluiceFactory()
	{
	}
	
	Sluice ConstructSluice(SluiceFactory::SluiceType sluiceType, int port ) //SluiceType is een enum met de 3 verschillende variaties
	{
		Communication* communication = new Communication(port);
		Door leftDoor;
		Door rightDoor;
		switch(sluiceType) 
		{
      case SluiceFactory::normalSluice:
      {
			leftDoor = Door(communication);
			rightDoor = Door(communication);
			break;
	  }
      case SluiceFactory::motorSluice:
      {
			leftDoor = DoorMotor(communication);
			rightDoor = DoorMotor(communication);
			break;
	  }
      case SluiceFactory::lockSluice:
      {
			leftDoor = DoorLock(communication);
			rightDoor = DoorLock(communication);
			break;
	  }
      default:
      {
			break;
	  }
        //Real bad error!
   }
		Sluice sluice = Sluice(leftDoor, rightDoor, communication);
		return sluice;
	}
	/*SluiceWatch roept factory.ConstructSluice aan. 
	Factory maakt deuren en geeft die mee aan de constructor van sluis en returned deze sluis. 
	De implementatie van leftdoor.open en leftdoor.close verschilt door inheritance*/

