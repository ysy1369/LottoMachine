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
	void registerMyTicket(Ticket& t);							// Ƽ�Ͽ� ��ȣ �Է� & �� Ƽ���� ��ȯ
	int* execLottoMachine(LottoMachine& machine);				// �ζ� �ӽ� ����
																//  => 7���� ����(6�� ��÷��ȣ + ���ʽ���ȣ)�� ���´�.
	bool selectOneMoreTime();									// Ƽ���� �� �� �� ����� ������ ���� Ȯ��
	void checkMyGrade(int* pickedNumbers, Ticket* myTicket);	// ��÷ ���� Check => �� ������ Check
	void showMyGrade(Ticket* myTicket);							// �� ��� ����

};
#endif