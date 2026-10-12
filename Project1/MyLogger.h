#pragma once

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
	MyLogger();
	MyLogger(const std::string& afilename);
	~MyLogger();
    MyLogger(const MyLogger& rhs) = delete;
	MyLogger& operator=(const MyLogger& rhs) = delete;
	MyLogger(MyLogger&& rhs) noexcept;
	MyLogger& operator=(MyLogger&& rhs) noexcept;
	void logToAFile(const std::string& amessage);
	void logToAConsole(const std::string& amessage);
	void logTo(LogDestination arg, const std::string& amessage);
};
}