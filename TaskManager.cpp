#include "TaskManager.h"

/* CONSTUCTOR & DESTRUCTOR */
TaskManager::TaskManager()
{
}
TaskManager::~TaskManager()
{
}
	
/* OTHER METHODS*/
void TaskManager::showStartUpScreen(IOHandler ioh)						// ù ȭ�� ǥ��
{
	cout << "Lotto TEST" <<endl;
}
void TaskManager::registerMyTicket(Ticket& t)									// Ƽ�Ͽ� ��ȣ �Է� & �� Ƽ���� ��ȯ
{
	t = Ticket();
	int* numbers = t.getMyNumbers();

	for(int i=0 ;i<6 ;i++) {
		cin >> numbers[i];
	}
}
int* TaskManager::execLottoMachine(LottoMachine& machine)	// �ζ� �ӽ� ���� => 7���� ����(6�� ��÷��ȣ + ���ʽ���ȣ)�� ���´�.
{
	machine.roll();

	return machine.getPickedNumbers();
}
bool TaskManager::selectOneMoreTime()									// Ƽ���� �� �� �� ����� ������ ���� Ȯ��
{
	return false;
}
void TaskManager::checkMyGrade(int* pickedNumbers, Ticket* myTicket)	// ��÷ ���� Check => �� ������ Check
{
}
void TaskManager::showMyGrade(Ticket* myTicket)							// �� ��� ����
{
}