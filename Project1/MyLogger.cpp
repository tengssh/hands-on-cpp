#include "MyLogger.h"
#include <typeinfo>
using namespace mylogger;

MyLogger::MyLogger() = default;
MyLogger::MyLogger(const std::string& afilename) : fs{afilename, std::ios::app}
{
    std::cout << "Constructor: " << afilename << '\n';
}

MyLogger::~MyLogger()
{
    if (fs.is_open())
    {
        fs.close();
        std::cout << "Close the file.\n";
    }
}

MyLogger::MyLogger(MyLogger&& other) noexcept : fs{ std::move(other.fs) }
{
    std::cout << "Move constructor\n";
}
MyLogger& MyLogger::operator=(MyLogger&& other) noexcept
{
    std::cout << "Move assignment\n";
    std::swap(fs, other.fs);
    return *this;
}

void MyLogger::logToAFile(const std::string& amessage)
{
    std::cout << "Receiving message from logToAFile:\n";
    if (!fs.is_open())
    {
        std::cout << "Failed to open the file!\n";
    }
    else
    {
        fs << amessage;
    }
}

void MyLogger::logToAConsole(const std::string& amessage)
{
    std::cout << "Receiving message from logToAConsole:\n";
    std::cout << amessage;
}

void MyLogger::logTo(LogDestination arg, const std::string& amessage)
{
    std::cout << "Receiving message from logTo:\n";
    switch (arg)
    {
        case LogDestination::CONSOLE:
            logToAConsole(amessage);
            break;
        case LogDestination::FILE:
            logToAFile(amessage);
            break;
        case LogDestination::BOTH:
            logToAConsole(amessage);
            logToAFile(amessage);
            break;
        default:
            break;
    }
}