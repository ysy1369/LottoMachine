#include "TaskManager.h"
// pickedNum => 정적배열 반환에 대해 알아보기... 아 까먹음......미치겠네

int main()
{
	/* DEFINE VARIABLES */
	int tCnt = 0;
	Ticket ticket[6];
	int pickedNum[6];

	/* DEFINE CLASS VARIABLES */
	LottoMachine ltm;
	IOHandler ioh;
	TaskManager tmgr;

	/* INITIALIZE OBJECTS */
	ltm = LottoMachine();
	ioh = IOHandler();
	tmgr = TaskManager();


	/* PROCESS */

	// 첫 화면 보이기
	tmgr.showStartUpScreen(ioh);

	// 티켓 등록
	do {
		tmgr.registerMyTicket(ticket[tCnt], ioh, ltm, tCnt);
		tCnt++;
	} while(tmgr.selectOneMoreTime(ioh) && tCnt<6); // 최대 6번 등록 가능
	
	// 로또 번호 생성
	tmgr.execLottoMachine(ltm, pickedNum);

	// 로또 번호 체크
	for(int i=0 ; i<tCnt ; i++) {
		tmgr.checkMyGrade(pickedNum, ticket);
	}
	
	//체크한 티켓의 당첨 여부 VIEW
	tmgr.showMyGrade(ticket);

	return 0;
}