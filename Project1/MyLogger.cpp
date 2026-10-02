#include "MyLogger.h"
using namespace mylogger;

// define the constructor(s)
MyLogger::MyLogger() = default;
MyLogger::MyLogger(const std::string& afilename) : fs{afilename, std::ios::app}
{
    std::cout << "Constructor: " << afilename << '\n';
}

// define the logToAFile member function
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

// define the logToAConsole member function
void MyLogger::logToAConsole(const std::string& amessage)
{
    std::cout << "Receiving message from logToAConsole:\n";
    std::cout << amessage;
}

// define the logTo member function
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

// Move semantics
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

// define the destructor
MyLogger::~MyLogger()
{
    if (fs.is_open())
    {
        fs.close();
        std::cout << "Close the file.\n";
    }    
}