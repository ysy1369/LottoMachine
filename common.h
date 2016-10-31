#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>
#include <string>
using namespace std;

const static int LOTTO_MAX_NUM = 45;
const static int LOTTO_ROLL_NUM_CNT = 7;
const static int LOTTO_REGISTER_NUM_CNT = 6;

const static int INT_ERROR = -999;
const static string STR_ERROR = "ERROR";

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
	Ticket(int num1st, int num2nd, int num3rd, int num4th, int num5th, int num6th)
	{
		myNumbers[0] = num1st;
		myNumbers[1] = num2nd;
		myNumbers[2] = num3rd;
		myNumbers[3] = num4th;
		myNumbers[4] = num5th;
		myNumbers[5] = num6th;

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
	
	/* OTHER METHODS */
	bool chkNumberOverlap(int num, int* chkArr) {
		//중복체크
	
	
	}
};
#endif