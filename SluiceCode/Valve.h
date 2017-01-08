#ifndef VALVE_H
#define VALVE_H

#include "Communication.h"

class Valve
{
	public:
		Valve(Communication* comm);
		bool valveOpened;
		void Open();
		void Close();
		Communication* communication;
};

#endif
