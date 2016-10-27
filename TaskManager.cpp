#include "TaskManager.h"

/* CONSTUCTOR & DESTRUCTOR */
TaskManager::TaskManager()
{
}
TaskManager::~TaskManager()
{
}
	
/* OTHER METHODS*/
void TaskManager::showStartUpScreen(IOHandler ioh)						// 첫 화면 표시
{
	cout << "Lotto TEST" <<endl;
}
void TaskManager::registerMyTicket(Ticket& t)									// 티켓에 번호 입력 & 그 티켓을 반환
{
	t = Ticket();
	int* numbers = t.getMyNumbers();

	for(int i=0 ;i<6 ;i++) {
		cin >> numbers[i];
	}
}
int* TaskManager::execLottoMachine(LottoMachine& machine)	// 로또 머신 실행 => 7개의 숫자(6개 당첨번호 + 보너스번호)가 나온다.
{
	machine.roll();

	return machine.getPickedNumbers();
}
bool TaskManager::selectOneMoreTime()									// 티켓을 한 장 더 등록할 것인지 여부 확인
{
	return false;
}
void TaskManager::checkMyGrade(int* pickedNumbers, Ticket* myTicket)	// 당첨 여부 Check => 몇 등인지 Check
{
}
void TaskManager::showMyGrade(Ticket* myTicket)							// 내 등수 보기
{
}