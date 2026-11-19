#include <iostream>

class MyClass
{
    public:
        MyClass();
	    ~MyClass();
};

MyClass::MyClass()
{
    std::cout << "construct\n";
}

MyClass::~MyClass()
{
    std::cout << "destruct\n";
}

int main()
{
    MyClass o;
}
