#include <iostream>
#include <vector>

template <class T>
class MyClass
{
    private:
        T val;
    public:
        MyClass(T _val) : val{_val}
        {}
        T getter() const
        {
            std::cout << val << '\n';
            return val;
        }
};

int main()
{
    std::vector<MyClass<int>> mc = {0, 1, 2};
    for (const auto& el : mc)
    {
        el.getter();
    }
}
