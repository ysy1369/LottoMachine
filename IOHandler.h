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
	string inputStringAtConsole();
	int inputIntegerAtConsole();

	/* OUTPUT METHODS */
	void outputStringtoConsole(string str);
	void outputNextLine();


};

#endif