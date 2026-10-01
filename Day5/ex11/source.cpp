#include <iostream>
#include <utility>

class MC
{
    private:
        int i;
    public:
        MC() = default;
        MC(const MC& rhs) = delete;
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
    MC c1;
    c1.geti();
    //MC c2 = c1; // deleted copy constructor
    MC c3 = std::move(c1);
    c3.geti();
    MC c4;
    c4 = std::move(c1);
    c4.geti();
}
