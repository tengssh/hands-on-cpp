#include <iostream>
#include <utility>

class MyClass
{
    private:
        int i;
        double d;
    public:
        MyClass(int _i, double _d) : i{_i}, d{_d} {}
        MyClass(const MyClass& rhs) : i{rhs.i}, d{rhs.d} {
            std::cout << "copy constructor\n";	
        }
        MyClass& operator=(const MyClass& rhs) {
            i = rhs.i;
            d = rhs.d;
            std::cout << "copy assignment\n";
            return *this;
        }
        MyClass(MyClass&& rhs) : i{std::move(rhs.i)}, d{std::move(rhs.d)} {
            std::cout << "move constructor\n";
        }
        MyClass& operator=(MyClass&& o) {
            i = std::move(o.i);
            d = std::move(o.d);
            std::cout << "move assignment\n";
            return *this;
        }
};

int main()
{
    MyClass c1{ 1, 3.14 };
    std::cout << "===\n";
    MyClass c2{ 2, 1.1 };
    std::cout << "===\n";
    MyClass c3 { c2 };
    std::cout << "===\n";
    c3 = c1;
    std::cout << "===\n";
    MyClass c4{ std::move(c1) };
    std::cout << "===\n";
    c2 = std::move(c1);
}
