#include "Person.h"
using namespace person;

Person::Person(const std::string& aname, int argage) : name{aname}, age{argage}
{
    std::cout << "Person constructor: " << aname << '\n';
}

Person::Person(const Person& rhs) : name{rhs.name}, age{rhs.age}
{
    std::cout << "Person copy constructor\n";
}

Person& Person::operator=(const Person& rhs)
{
    if (this != &rhs){
        std::cout << "Person copy assignment\n";
        name = rhs.name;
        age = rhs.age;
    }
    return *this;
}

Person::Person(Person&& other) noexcept : name{std::move(other.name)}, age{std::move(other.age)}
{
    std::cout << "Move constructor\n";
}

Person& Person::operator=(Person&& other) noexcept
{
    if (this != &other){
        std::cout << "Move assignment\n";
        name = std::move(other.name);
        age = std::move(other.age);
    }
    return *this;
}

std::string Person::get_name() const
{
    return name;
}

int Person::get_age() const
{
    return age;
}

Person::~Person()
{
    std::cout << "Destructor: " << get_name() << '\n';
}