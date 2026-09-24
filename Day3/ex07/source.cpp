#include <iostream>
#include <string>

class Person
{
    public:
        static std::string name;
};

std::string Person::name = "Alice";

int main()
{
    std::cout << Person::name << '\n';
    Person::name = "Bob";
    std::cout << Person::name << '\n';
}
