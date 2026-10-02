#include <iostream>
#include "Employee.h"
#include <vector>
using namespace person;

int main()
{
	int i;
	std::vector<Employee> v = {// initialize a vector of employees
		Employee("Alice", 30, "CEO"),
		Employee("Bob", 31, "CTO"),
		Employee("Charlie", 28, "CFO"),
	};

	i = v.size();
	for (auto el : v)
	{
		el.call(v[--i]); /*invoke one or more member functions here*/
	}

	// Bonus requirement:
	// Make a vector of polymorphic pointers/objects
	std::vector<std::unique_ptr<Person>> upv;
	upv.push_back(std::make_unique<Employee>("David", 25, "Engineer"));
	upv.push_back(std::make_unique<Employee>("Eve", 26, "HR"));
	upv.push_back(std::make_unique<Employee>("Frank", 25, "Technician"));
	i = upv.size();
	for (const auto& el : upv)
	{
	 	el->call(*upv[--i]);
	}

	// move semantics
	Employee e1 = std::move(v.at(2));
	Employee e2;
	e2 = std::move(e1);
	std::cout << "Move: " << e2.get_name() << '\n';
}