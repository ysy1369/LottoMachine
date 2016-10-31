#include "IOHandler.h"

/* CONSTRUCTOR & DESTRUCTOR */
IOHandler::IOHandler() {}
IOHandler::~IOHandler() {}

/* INPUT METHODS */

/* OUTPUT METHODS */

void IOHandler::outputStartUpScreen()
{
	this->outputStringtoConsoleWithNextLine("=============================================");
	this->outputStringtoConsoleWithNextLine("==============<<LOTTO MACHINE>>==============");
	this->outputStringtoConsoleWithNextLine("=================================AUTHOR:YSY==");
	this->outputStringtoConsoleWithNextLine("=============================================");

}
void IOHandler::outputClearScreenAfterXSeconds(int sec)
{
	_sleep(sec*1000);
	system("cls");
}

/* INPUT BASIC METHODS */
string IOHandler::inputStringAtConsole()
{
	string str ="";

	this->cinBufferClear();
	cin >> str;

	if(cinFailCheck())
		return STR_ERROR;

	return str;
}
int IOHandler::inputIntegerAtConsole()
{
	int num=0;

	this->cinBufferClear();
	cin >> num;

	if(cinFailCheck())
		return INT_ERROR;
	return num;
}

/* OUTPUT BASIC METHODS */
void IOHandler::outputStringtoConsole(string str)
{
	cout << str;
}
void IOHandler::outputStringtoConsoleWithNextLine(string str)
{
	cout << str << endl;
}
void IOHandler::outputNextLine()
{
	cout << endl;
}

/* OTHER METHODS */
void IOHandler::cinBufferClear() 
{
	cin.clear(); 
	//fflush(stdin);
}
bool IOHandler::cinFailCheck() 
{ 
	if(cin.fail()) 
	{ 
		cin.clear(); 
		cin.ignore(1);

		//this->cinBufferClear();
		cout << "잘못입력하셨습니다. 다시 입력하십시오."<<endl; 
		 
		return true; 
	} 
	return false; 
} 