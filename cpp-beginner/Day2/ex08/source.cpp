#include <iostream>

class MyClass
{
    public:
        char c = 'a';
        int i = 1;
        bool b = true;
};

int main()
{
    MyClass o;
    std::cout << o.c << o.i << o.b << '\n';
}
