#include <iostream>
#include <memory>

class Base
{
    public:
        virtual void dowork() = 0;
        virtual ~Base() {}
};

class DC : public Base
{
    public:
       void dowork() override
       {
           std::cout << "Derived work\n";
       }
};

int main()
{
    std::unique_ptr<Base> p(new DC{});
    p->dowork();
}
