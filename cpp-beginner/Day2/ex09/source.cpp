#include <iostream>

class MyClass
{
    public:
        void printmessage()
	{
		std::cout << "an arbitrary message\n";
	}
};

int main()
{
    MyClass o;
    o.printmessage();
}
