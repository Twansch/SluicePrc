#ifndef VALVE_H
#define VALVE_H

#include "Communication.h"

class Valve
{
	public:
		Valve(Communication* comm);
		bool valveOpened;
		void Open(int valveNumber, int doorNumber);
		void Close(int valveNumber, int doorNumber);
		Communication* communication;
};

#endif
