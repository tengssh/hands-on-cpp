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
    INT* rp = new INT{-1};
    std::unique_ptr<INT> up1(new INT{101});
    std::shared_ptr<INT> up2 = std::make_shared<INT>(0);
    std::shared_ptr<INT> up3 = up2;
    std::cout << rp->geti() << '\n';
    std::cout << up1->geti() << '\n';
    std::cout << up2->geti() << '\n';
    std::cout << up3->geti() << '\n';
    delete rp;
}
