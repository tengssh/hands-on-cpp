#include <iostream>

class MyClass
{
    public:
        void printmessage();
};

void MyClass::printmessage()
{
    std::cout << "an arbitrary message\n";
}

int main()
{
    MyClass o;
    o.printmessage();
}
