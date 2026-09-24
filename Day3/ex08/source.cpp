#include <iostream>

class FUN
{
    public:
        static int i;
        static void fun1();
        void fun2();
};

int FUN::i = 123;

void FUN::fun1()
{
    std::cout << "Fun1\n";
}

void FUN::fun2()
{
    std::cout << "Fun2\n";
}

int main()
{
    FUN f;

    std::cout << FUN::i << '\n';
    f.fun1();
    f.fun2();
    FUN::fun1();
}
