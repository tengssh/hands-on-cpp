#include <iostream>
#include <memory>

class C
{
    private:
       int i;
    public:
        explicit C(int _i) : i{_i}{}
        int geti() const {return i;}
};

int main()
{
    std::shared_ptr<C> p1 = std::make_shared<C>(C{1});
    std::cout << p1->geti() << '\n';
    std::shared_ptr<C> p2 = p1;
    std::cout << p2->geti() << '\n';
    std::shared_ptr<C> p3 = p2;
    std::cout << p3->geti() << '\n';
}
