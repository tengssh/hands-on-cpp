#include <iostream>
#include <string>

int main()
{
    std::string name = "John Doe";
    std::cout << name.substr(0, 4) << '\n' << name.substr(5, 3);
}
