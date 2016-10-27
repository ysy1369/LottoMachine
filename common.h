#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>
#include <string>
using namespace std;

const static int LOTTO_MAX_NUM = 45;
const static int LOTTO_ROLL_NUM_CNT = 7;
const static int LOTTO_REGISTER_NUM_CNT = 6;
class Ticket 
{
private:
	int myNumbers[6];
	int grade;

public:
	
	/* CONSTRUCTOR & DESTRUCTOR */
	Ticket() {
		memset(myNumbers, 0x00, sizeof(int)*45);
		grade=0;	//   0 : LottoMachine에 아직 돌리지 않음
					// 1~5 : 등수
	}
	Ticket(int* ticketNum) {
		memcpy(myNumbers, ticketNum, sizeof(int)*6);
	}
	~Ticket() {}

	/* GETTERS & SETTERS */
	int* getMyNumbers() {
		return myNumbers;
	}
	int getGrade() {
		return grade;
	}
	
};
#endif