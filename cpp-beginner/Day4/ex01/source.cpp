#include <iostream>

template <typename T>
T squared(T val)
{
    return val * val;
}

int main()
{
    int i = 2;
    double j = 1.1;

    std::cout << squared<int>(i) << '\n';
    std::cout << squared<double>(j) << '\n';
}
