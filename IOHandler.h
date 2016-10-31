#ifndef __IO_HANDLER_H__
#define __IO_HANDLER_H__

#include "common.h"

//CLASS of VIEW
//HANDLE ONLY Input&Output
class IOHandler
{
private:

public:
	/* CONSTRUCTOR & DESTRUCTOR */
	IOHandler();
	~IOHandler();

	/* INPUT METHODS */

	/* OUTPUT METHODS */
	void outputStartUpScreen();
	void outputClearScreenAfterXSeconds(int sec);


	/* INPUT BASIC METHODS */
	string inputStringAtConsole();
	int inputIntegerAtConsole();

	/* OUTPUT BASIC METHODS */
	void outputStringtoConsole(string str);
	void outputStringtoConsoleWithNextLine(string str);
	void outputNextLine();

	/* OTHER METHODS */
	void cinBufferClear();
	bool cinFailCheck();

};

#endif