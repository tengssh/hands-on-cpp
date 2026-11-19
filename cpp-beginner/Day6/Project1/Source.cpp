#include <iostream>
#include "MyLogger.h"
using namespace mylogger;

int main()
{
	MyLogger o("mylog.txt");
	o.logToAConsole("Sending log to a console!\n");
	o.logToAFile("Sending log to a file!\n");
	o.logTo(LogDestination::CONSOLE, "Sending log to CONSOLE\n");
	o.logTo(LogDestination::FILE, "Sending log to FILE\n");
	o.logTo(LogDestination::BOTH, "Sending log to BOTH\n");

	//MyLogger cp = o;
	MyLogger mc = std::move(o);
	mc.logToAConsole("MC: Sending log to a console!\n");
	mc.logTo(LogDestination::FILE, "MC: Sending log to FILE\n");
	MyLogger mv("mylog_1.txt");
	mv.logTo(LogDestination::FILE, "MV: Sending log to FILE\n");
	mv = std::move(o);
	mv.logToAConsole("MV: Sending log to a console!\n");
	mv.logTo(LogDestination::FILE, "MV: Sending log to FILE\n");
}