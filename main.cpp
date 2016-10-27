#include "TaskManager.h"



int main()
{
	/* DEFINE VARIABLES */
	int tCnt = 0;
	Ticket ticket[6];
	int pickedNum[6];

	/* DEFINE OBJECTS */
	LottoMachine ltm;
	IOHandler ioh;
	TaskManager tmgr;

	/* INITIALIZE OBJECTS */
	ltm = LottoMachine();
	ioh = IOHandler();
	tmgr = TaskManager();


	/* PROCESS */

	// ù ȭ�� ���̱�
	tmgr.showStartUpScreen(ioh);

	// Ƽ�� ���
	do {
		tmgr.registerMyTicket(ticket[tCnt]);
		tCnt++;
	} while(tmgr.selectOneMoreTime() && tCnt<6); // �ִ� 6�� ��� ����
	
	// �ζ� ��ȣ ����
	pickedNum = tmgr.execLottoMachine(ltm);

	// �ζ� ��ȣ üũ
	for(int i=0 ; i<tCnt ; i++) {
		tmgr.checkMyGrade(pickedNum, ticket);
	}
	
	//üũ�� Ƽ���� ��÷ ���� VIEW
	tmgr.showMyGrade(ticket);

	return 0;
}