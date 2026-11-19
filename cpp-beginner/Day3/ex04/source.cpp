#include <iostream>
#include <memory>

class Base
{
    public:
        virtual void dowork() = 0;
        virtual ~Base() {}
};

class DC1 : public Base
{
    public:
       void dowork() override
       {
           std::cout << "Derived work 1\n";
       }
};

class DC2 : public Base
{
    public:
       void dowork() override
       {
           std::cout << "Derived work 2\n";
       }
};

int main()
{
    std::unique_ptr<Base> p1(new DC1);
    std::unique_ptr<Base> p2(new DC2);
    p1->dowork();
    p2->dowork();
}
