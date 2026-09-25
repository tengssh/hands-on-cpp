#include <iostream>

template <class T>
class TC
{
    private:
        T val;
    public:
        TC(T _val) : val{_val}
        {}
        T getter() const;
        void setter(T v);
};

template <class T>
T TC<T>::getter() const
{
    return val;
}

template <class T>
void TC<T>::setter(T v)
{
    val = v;
}

int main()
{
    TC<int> i{ 123 };
    std::cout << i.getter() << '\n';
    i.setter(456);
    std::cout << i.getter() << '\n';

    TC<char> c{ 'a' };
    std::cout << c.getter() << '\n';
    c.setter('b');
    std::cout << c.getter() << '\n';
}
