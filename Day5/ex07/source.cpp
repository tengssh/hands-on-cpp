#include <iostream>
#include <utility>

class MC
{
    private:
        int i;
    public:
        MC(int _i) : i{_i} { std::cout << "constructor\n"; }
	MC(const MC& rhs) 
        {
            i = rhs.i;
            std::cout << "copy constructor\n";
        }
        MC(MC&& rhs) : i{ std::move(rhs.i) } { std::cout << "move copy\n"; }
        MC& operator=(MC&& rhs)
        {
            i = std::move(rhs.i);
            std::cout << "move assignment\n";
            return *this;
        }
        int geti() const
        {
            std::cout << i << '\n';
            return i;
        }
};

int main()
{
    MC c1(1);
    c1.geti();
    MC c2 = std::move(c1);
    c2.geti();
    MC c3 = c2;
    c3.geti();
    MC c4(4);
    c4 = std::move(c3);
    c4.geti();
}
