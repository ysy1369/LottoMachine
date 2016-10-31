#ifndef __TASK_MANAGER_H__
#define __TASK_MANAGER_H__

#include "LottoMachine.h"
#include "IOHandler.h"
//CLASS of COTOLLER
class TaskManager
{
private:
public:
	/* CONSTUCTOR & DESTRUCTOR */
	TaskManager();
	~TaskManager();
	
	/* OTHER METHODS*/
	void showStartUpScreen(IOHandler ioh);						// 첫 화면 표시
	//void registerMyTicket(Ticket& myTicket);					
	void registerMyTicket(Ticket& t, IOHandler ioh, LottoMachine ltm, int tCnt);							// 티켓에 번호 입력 & 그 티켓을 반환
	void execLottoMachine(LottoMachine& machine, int pickedNum[6]);				// 로또 머신 실행
																//  => 7개의 숫자(6개 당첨번호 + 보너스번호)가 나온다.
	bool selectOneMoreTime(IOHandler ioh);									// 티켓을 한 장 더 등록할 것인지 여부 확인
	void checkMyGrade(int* pickedNumbers, Ticket* myTicket);	// 당첨 여부 Check => 몇 등인지 Check
	void showMyGrade(Ticket* myTicket);							// 내 등수 보기

};
#endif