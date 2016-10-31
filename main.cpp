#include "TaskManager.h"
// pickedNum => �����迭 ��ȯ�� ���� �˾ƺ���... �� �����......��ġ�ڳ�

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

	// ù ȭ�� ���̱�
	tmgr.showStartUpScreen(ioh);

	// Ƽ�� ���
	do {
		tmgr.registerMyTicket(ticket[tCnt], ioh, ltm, tCnt);
		tCnt++;
	} while(tmgr.selectOneMoreTime(ioh) && tCnt<6); // �ִ� 6�� ��� ����
	
	// �ζ� ��ȣ ����
	tmgr.execLottoMachine(ltm, pickedNum);

	// �ζ� ��ȣ üũ
	for(int i=0 ; i<tCnt ; i++) {
		tmgr.checkMyGrade(pickedNum, ticket);
	}
	
	//üũ�� Ƽ���� ��÷ ���� VIEW
	tmgr.showMyGrade(ticket);

	return 0;
}