 // implement a namespace, a code guard etc.
#ifndef MYLOGGER_H
#define MYLOGGER_H

#include <fstream>
#include <iostream>
#include <string>
#include <utility>

namespace mylogger {
enum class LogDestination
{
	CONSOLE,
	FILE,
	BOTH
};

class MyLogger 
{
private:
	std::fstream fs;
public:
	MyLogger(); // default constructor
	MyLogger(const std::string& afilename); // user-provided constructor
	~MyLogger(); // destructor
	// Copy semantics? Explore if std::fstream is copyable
    MyLogger(const MyLogger& rhs) = delete;
	MyLogger& operator=(const MyLogger& rhs) = delete;
	// Move semantics? Explore if std::fstream is movable
	MyLogger(MyLogger&& rhs) noexcept;
	MyLogger& operator=(MyLogger&& rhs) noexcept;
	void logToAFile(const std::string& amessage);
	void logToAConsole(const std::string& amessage);
	void logTo(LogDestination arg, const std::string& amessage);
};
}
#endif