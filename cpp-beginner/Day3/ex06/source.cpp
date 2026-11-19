#include <iostream>
#include <utility>
#include <memory>

class Base
{
    private:
        int i;
    public:
        virtual void dowork() = 0;
        explicit Base(int _i) : i{_i}{}
        Base(Base&& rhs) : i{std::move(rhs.i)}{}
        Base& operator=(Base&& rhs) noexcept
        {
            i = std::move(rhs.i);
            return *this;
        } 
        int geti(){return i;}
        ~Base(){}
};

class DC : public Base
{
    private:
        double j;
    public:
        DC(int _i, double _j) : Base{_i}, j{_j} {}
        DC(DC&& rhs) noexcept : Base(std::move(rhs)), j{std::move(rhs.j)} {}
        DC& operator=(DC&& rhs) noexcept
        {
            Base::operator=(std::move(rhs));
            j = std::move(rhs.j);
            return *this;
        }
        void dowork() override
        {
            std::cout << "Derived work\n";
        }
        double getd() const {return j;}
};

int main()
{
    DC d1{1, 1.1};
    DC d2{3, 3.3};
    std::cout << d1.geti() << " " << d1.getd() <<  '\n';
    d1 = std::move(d2);
    std::cout << d1.geti() << " " << d1.getd() <<  '\n';
}
