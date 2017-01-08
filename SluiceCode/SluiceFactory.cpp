#include "SluiceFactory.h"



	SluiceFactory::SluiceFactory()
	{
	}
	
	Sluice ConstructSluice(SluiceFactory::SluiceType sluiceType) //SluiceType is een enum met de 3 verschillende variaties
	{
		Door leftDoor;
		Door rightDoor;
		switch(sluiceType) 
		{
      case SluiceFactory::normalSluice:
      {
			leftDoor = Door();
			rightDoor = Door();
			break;
	  }
      case SluiceFactory::motorSluice:
      {
			leftDoor = DoorMotor();
			rightDoor = DoorMotor();
			break;
	  }
      case SluiceFactory::lockSluice:
      {
			leftDoor = DoorLock();
			rightDoor = DoorLock();
			break;
	  }
      default:
      {
			break;
	  }
        //Real bad error!
   }
		Sluice sluice = Sluice(leftDoor, rightDoor);
		return sluice;
	}
	/*SluiceWatch roept factory.ConstructSluice aan. 
	Factory maakt deuren en geeft die mee aan de constructor van sluis en returned deze sluis. 
	De implementatie van leftdoor.open en leftdoor.close verschilt door inheritance*/

