#pragma once
#include "Person.h"
using namespace person;

class Employee : public Person
{
private:
	std::string role{};
public:
	Employee() = default;
	Employee(const std::string& aname, int argage, const std::string& arole);
	// Implement several getters and setters
	std::string get_role() const;

	// Bonus requirement:
	// Create one or more overridden member functions
	void call(const Person& p) const override;
};