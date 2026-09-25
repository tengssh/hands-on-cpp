#include <iostream>

template <typename T>
void print(T val)
{
    std::cout << "General template: " << val << '\n';
}

template <>
void print(double val)
{
    std::cout << "Double only message: " << val << '\n';
}

int main()
{
    print<int>(1);
    print<char>('a');
    print<unsigned>(100u);
    print<bool>(true);
    print<double>(3.14);
}
