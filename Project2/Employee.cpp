#include "Employee.h"
using namespace person;

Employee::Employee(const std::string& aname, int argage, const std::string& arole) : Person{aname, argage}, role{arole}
{
    std::cout << "Employee constructor: " << aname << '\n';
}

std::string Employee::get_role() const
{
    return role;
}

void Employee::call(const Person& p) const
{
    std::cout << get_name() << " -- calls --> " << p.get_name() << '\n';
}