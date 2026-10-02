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
    std::cout << "Person copy assignment\n";
    name = rhs.name;
    age = rhs.age;
    return *this;
}

Person::Person(Person&& rhs) noexcept : name{std::move(rhs.name)}, age{std::move(rhs.age)}
{
    std::cout << "Move constructor\n";
}

Person& Person::operator=(Person&& rhs) noexcept
{
    std::cout << "Move assignment\n";
    name = std::move(rhs.name);
    age = std::move(rhs.age);
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