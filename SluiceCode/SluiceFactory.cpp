#include "SluiceFactory.h"



	SluiceFactory::SluiceFactory()
	{
	}
	
	Sluice ConstructSluice(SluiceFactory::SluiceType sluiceType, int port ) //SluiceType is een enum met de 3 verschillende variaties
	{
		Communication* communication = new Communication(port);
		switch(sluiceType) 
		{
      case SluiceFactory::normalSluice:
      {
			Door leftDoor = Door(communication);
			Door rightDoor = Door(communication);
			Sluice sluice = Sluice(leftDoor, rightDoor, communication);
		return sluice;
			break;
	  }
      case SluiceFactory::motorSluice:
      {
			Door leftDoor = DoorMotor(communication);
			Door rightDoor = DoorMotor(communication);
			Sluice sluice = Sluice(leftDoor, rightDoor, communication);
		return sluice;
			break;
	  }
      case SluiceFactory::lockSluice:
      {
			Door leftDoor = DoorLock(communication);
			Door rightDoor = DoorLock(communication);
			Sluice sluice = Sluice(leftDoor, rightDoor, communication);
		return sluice;
			break;
	  }
      default:
      {
			break;
	  }
        //Real bad error!
   }
		return Sluice(Door(communication), Door(communication), communication);
	}
	/*SluiceWatch roept factory.ConstructSluice aan. 
	Factory maakt deuren en geeft die mee aan de constructor van sluis en returned deze sluis. 
	De implementatie van leftdoor.open en leftdoor.close verschilt door inheritance*/

