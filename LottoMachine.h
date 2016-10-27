#ifndef _LOTTO_MACHINE_H__
#define _LOTTO_MACHINE_H__

#include "common.h"

class LottoMachine 
{
private:
	bool randNumbers[LOTTO_MAX_NUM+1];

public:
	/* CONSTRUCTOR & DESTRUCTOR */
	LottoMachine();
	~LottoMachine();

	/* GETTERS & SETTERS */
	
	/* OTHER METHODS */
	void roll();
	int* getPickedNumbers();
	void calcGrade(Ticket myTicket);
};
#endif