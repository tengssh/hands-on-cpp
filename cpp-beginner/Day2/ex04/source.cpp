#include <iostream>

enum Weekend
{
    Sat, Sun = 100
};

enum class Weekday
{
    M, Tu, W, Th, F
};

int main()
{
    Weekday w = Weekday::Tu;
    Weekend e = Sun;
    if (w == Weekday::F) std::cout << "Friday.\n";
    else std::cout << "Not Friday. " << static_cast<int>(w) << '\n';
    if (e == Sat) std::cout << "Saturday.\n";
    else std::cout << "Not Saturday. " << static_cast<int>(e) << '\n';
}
