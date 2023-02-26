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
{// ù ȭ�� ǥ��
	ioh.outputStartUpScreen();
	ioh.outputClearScreenAfterXSeconds(2);
}

void TaskManager::registerMyTicket(Ticket& t, IOHandler ioh, LottoMachine ltm, int tCnt)									
{// Ƽ�Ͽ� ��ȣ �Է� & �� Ƽ���� ��ȯ

	/* DEFINE TEMPORARY VARIABLES */
	int numbers[6] = {0,};
	string cntStr = "";
	
	cntStr = '1' + tCnt;
	ioh.outputStringtoConsoleWithNextLine(cntStr+"��° Ƽ��");


	/* INPUT 6 NUMBERS on TICKET */
	for(int i=0 ; i<6 ;i++) {
		cntStr='1'+i;
		
		ioh.outputStringtoConsole(cntStr+"��° ���� �Է�:");
		int tmpNum = ioh.inputIntegerAtConsole();
		ioh.outputNextLine();

		if(tmpNum == INT_ERROR) {//INPUT INTEGER EXCEPTION
			i--;
			continue;
		} else if(ltm.chkOverlap(numbers, i, tmpNum) /*�ߺ�üũ*/) {
			ioh.outputStringtoConsoleWithNextLine("���� �ߺ����� �ʴ� ���ڸ� �Է��ϼž� �մϴ�.");
			i--;
			continue;
		} else if/*1~45 ����*/��ġ��) {
			
		
		}
		numbers[i] = tmpNum;
	}

	/* TICKET OBJECT INITIALIZATION */
	t = Ticket(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	/* CONSOLE SCREEN CLEAR */
	ioh.outputClearScreenAfterXSeconds(0);
}

void TaskManager::execLottoMachine(LottoMachine& machine, int pickedNum[6])	
{// �ζ� �ӽ� ���� => 7���� ����(6�� ��÷��ȣ + ���ʽ���ȣ)�� ���´�.

	machine.roll();
	pickedNum = machine.getPickedNumbers();
	//return machine.getPickedNumbers();
}

bool TaskManager::selectOneMoreTime(IOHandler ioh)
{// Ƽ���� �� �� �� ����� ������ ���� Ȯ��

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

void TaskManager::checkMyGrade(int* pickedNumbers, Ticket* myTicket)	// ��÷ ���� Check => �� ������ Check
{
}
void TaskManager::showMyGrade(Ticket* myTicket)							// �� ��� ����
{
}

//새 작업자의 첫번째 변경사항