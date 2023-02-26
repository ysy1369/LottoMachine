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
	void showStartUpScreen(IOHandler ioh);						// ù ȭ�� ǥ��
	//void registerMyTicket(Ticket& myTicket);					
	void registerMyTicket(Ticket& t, IOHandler ioh, LottoMachine ltm, int tCnt);							// Ƽ�Ͽ� ��ȣ �Է� & �� Ƽ���� ��ȯ
	void execLottoMachine(LottoMachine& machine, int pickedNum[6]);				// �ζ� �ӽ� ����
																//  => 7���� ����(6�� ��÷��ȣ + ���ʽ���ȣ)�� ���´�.
	bool selectOneMoreTime(IOHandler ioh);									// Ƽ���� �� �� �� ����� ������ ���� Ȯ��
	void checkMyGrade(int* pickedNumbers, Ticket* myTicket);	// ��÷ ���� Check => �� ������ Check
	void showMyGrade(Ticket* myTicket);							// �� ��� ����

};
#endif

//master 변경사항

//첫번째 변경사항
//두번째 변경사항

//세번째 변경사항