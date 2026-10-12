#include "MyLogger.h"
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

MyLogger::MyLogger(MyLogger&& rhs) noexcept : fs{ std::move(rhs.fs) }
{
    std::cout << "Move constructor\n";
}
MyLogger& MyLogger::operator=(MyLogger&& rhs) noexcept
{
    std::cout << "Move assignment\n";
    fs = std::move(rhs.fs);
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