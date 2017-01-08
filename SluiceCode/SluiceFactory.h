#ifndef SLUICEFACTORY_H
#define SLUICEFACTORY_H

#include "Sluice.h"
#include "Door.h"
#include "DoorMotor.h"
#include "DoorLock.h"

class SluiceFactory
{
	public:
		SluiceFactory();
		enum SluiceType {normalSluice, motorSluice, lockSluice};
		Sluice ConstructSluice(SluiceType sluiceType, int port);
		
};

#endif
