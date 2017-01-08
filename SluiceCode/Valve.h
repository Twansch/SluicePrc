#ifndef VALVE_H
#define VALVE_H

#include "Communication.h"

class Valve
{
	public:
		Valve();
		bool valveOpened;
		void Open();
		void Close();
};

#endif
