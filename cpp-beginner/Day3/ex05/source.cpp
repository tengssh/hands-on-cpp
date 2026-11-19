#include <iostream>
#include <memory>

class Base
{
    public:
        virtual void dowork() = 0;
        virtual ~Base(){}
};

class DC : public Base
{
    private:
       int i;
    public:
       DC(int _i) : i{_i}{}
       void dowork() override
       {
           std::cout << "Derived class\n";
       }
       ~DC(){std::cout << "Destructing the derived class: " << i << '\n';}
};

int main()
{
    Base* rp = new DC(1);
    std::unique_ptr<Base> up1(new DC(2));
    std::unique_ptr<DC> up2 = std::make_unique<DC>(3); // for >=C++14
    rp->dowork();
    std::cout << "===\n";
    up1->dowork();
    std::cout << "===\n";
    up2->dowork();
    std::cout << "===\n";
    delete rp;
}
