class SluiceFactory
{
	SluiceFactory()
	{
	}
	
	Sluice ConstructSluice(SluiceType sluiceType) //SluiceType is een enum met de 3 verschillende variaties
	{
		switch(sluiceType) {
      case normalSluice :
			Door leftDoor = new Door();
			Door rightDoor = new Door();
			break;
      case motorSluice :
			DoorMotor leftDoor = new DoorMotor();
			DoorMotor rightDoor = new DoorMotor();
			break;
      case lockSluice :
			DoorLock leftDoor = new DoorLock();
			DoorLock rightDoor = new DoorLock();
			break;
      default :
        //Real bad error!
   }
		Sluice sluice = new Sluice(leftDoor, rightDoor);
		return sluice;
	}
	/*SluiceWatch roept factory.ConstructSluice aan. 
	Factory maakt deuren en geeft die mee aan de constructor van sluis en returned deze sluis. 
	De implementatie van leftdoor.open en leftdoor.close verschilt door inheritance*/
}
