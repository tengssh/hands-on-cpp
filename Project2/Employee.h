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
	~Employee() = default;
	std::string get_role() const;
	void call(const Person& p) const override;
};