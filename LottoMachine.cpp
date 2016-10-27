#include "LottoMachine.h"

/* CONSTRUCTOR & DESTRUCTOR */
LottoMachine::LottoMachine()
{
	memset(randNumbers, false, sizeof(bool)*(LOTTO_MAX_NUM+1));
}
LottoMachine::~LottoMachine()
{
}

/* GETTERS & SETTERS */
	
/* OTHER METHODS */
void LottoMachine::roll()
{
	int tmpRandNum[7] = {1,2,3,4,5,6,7};

	for(int i=0; i<LOTTO_ROLL_NUM_CNT ;i++) {
		randNumbers[tmpRandNum[i]] = true;
	}
}
int* LottoMachine::getPickedNumbers()
{
	int test[LOTTO_REGISTER_NUM_CNT] = {1,2,3,4,5,6};
	return test;
}
void LottoMachine::calcGrade(Ticket myTicket)
{
}