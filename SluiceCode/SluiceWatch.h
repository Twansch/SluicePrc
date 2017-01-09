#ifndef SLUICEWATCH_H
#define SLUICEWATCH_H

#include <vector>
#include "Sluice.h"
#include "SluiceFactory.h"

class SluiceWatch
{
	public:
		SluiceWatch();
		std::vector<Sluice> sluices;
		
		//void AddSluice(Sluice sluice);
		// en   RemoveSluice(Sluice sluice); toe te voegen om onze vector te beheren.
		
		void VrijgevenVoorInvaren(int sluicePortNumber); // Engelse duidelijke naam bedenken
		void VrijgevenVoorUitvaren(int sluicePortNumber); // Engelse duidelijke naam bedenken
		void StartSchut(int sluicePortNumber); // Engelse duidelijke naam bedenken
		void AlarmMode();
};

#endif
