#include "TaskManager.h"

/* CONSTUCTOR & DESTRUCTOR */
TaskManager::TaskManager()
{
}
TaskManager::~TaskManager()
{
}
	
/* OTHER METHODS*/
void TaskManager::showStartUpScreen(IOHandler ioh)						
{// 첫 화면 표시
	ioh.outputStartUpScreen();
	ioh.outputClearScreenAfterXSeconds(2);
}

void TaskManager::registerMyTicket(Ticket& t, IOHandler ioh, LottoMachine ltm, int tCnt)									
{// 티켓에 번호 입력 & 그 티켓을 반환

	/* DEFINE TEMPORARY VARIABLES */
	int numbers[6] = {0,};
	string cntStr = "";
	
	cntStr = '1' + tCnt;
	ioh.outputStringtoConsoleWithNextLine(cntStr+"번째 티켓");


	/* INPUT 6 NUMBERS on TICKET */
	for(int i=0 ; i<6 ;i++) {
		cntStr='1'+i;
		
		ioh.outputStringtoConsole(cntStr+"번째 숫자 입력:");
		int tmpNum = ioh.inputIntegerAtConsole();
		ioh.outputNextLine();

		if(tmpNum == INT_ERROR) {//INPUT INTEGER EXCEPTION
			i--;
			continue;
		} else if(ltm.chkOverlap(numbers, i, tmpNum) /*중복체크*/) {
			ioh.outputStringtoConsoleWithNextLine("서로 중복되지 않는 숫자를 입력하셔야 합니다.");
			i--;
			continue;
		} else if/*1~45 숫자*/고치고) {
			
		
		}
		numbers[i] = tmpNum;
	}

	/* TICKET OBJECT INITIALIZATION */
	t = Ticket(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	/* CONSOLE SCREEN CLEAR */
	ioh.outputClearScreenAfterXSeconds(0);
}

void TaskManager::execLottoMachine(LottoMachine& machine, int pickedNum[6])	
{// 로또 머신 실행 => 7개의 숫자(6개 당첨번호 + 보너스번호)가 나온다.

	machine.roll();
	pickedNum = machine.getPickedNumbers();
	//return machine.getPickedNumbers();
}

bool TaskManager::selectOneMoreTime(IOHandler ioh)
{// 티켓을 한 장 더 등록할 것인지 여부 확인

	string str = "";
	bool selectFlag = true;
	bool loopFlag = true;

	while(loopFlag) {
		ioh.outputStringtoConsoleWithNextLine("Maximum number of Ticket is 6");
		ioh.outputStringtoConsoleWithNextLine("Do you want one more Ticket? (y/n)"); 
		ioh.outputStringtoConsole("INPUT: ");
		str = ioh.inputStringAtConsole();

		if(str.compare("y")==0 || str.compare("Y")==0) {// INPUT 'Y'
			selectFlag = true;
			loopFlag = false;
			ioh.outputStringtoConsole("              Hooray~!! One more Ticket!!");
		}		
		else if(str.compare("n")==0 || str.compare("N")==0) {//INPUT 'N'
			selectFlag = false;
			loopFlag = false;
			ioh.outputStringtoConsole("              You select NO...");
		}
		else {//INPUT THE OTHERS
			ioh.outputStringtoConsole("              [Warning!!] Incorrect Input!");						
		}
		ioh.outputClearScreenAfterXSeconds(1);
	}

	return selectFlag;
}

void TaskManager::checkMyGrade(int* pickedNumbers, Ticket* myTicket)	// 당첨 여부 Check => 몇 등인지 Check
{
}
void TaskManager::showMyGrade(Ticket* myTicket)							// 내 등수 보기
{
}