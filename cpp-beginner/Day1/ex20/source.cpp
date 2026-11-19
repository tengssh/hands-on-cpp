#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    switch (x)
    {
        case 1:
            std::cout << "one\n";
            break;
        case 2:
            std::cout << "two\n";
            break;
        case 3:
            std::cout << "three\n";
            break;
        case 4:
            std::cout << "four\n";
            break;
        default:
            std::cout << "others\n";
            break;
    }
}
