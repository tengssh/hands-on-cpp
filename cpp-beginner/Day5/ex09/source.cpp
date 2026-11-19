#include <iostream>
#include <memory>

class INT
{
    private:
        int i;
    public:
        INT(int _i) : i{_i} {}
        int geti() const;
};

int INT::geti() const
{
    return i;
}

int main()
{
    std::unique_ptr<INT> up(new INT{101});
    std::cout << up->geti() << '\n';
}
