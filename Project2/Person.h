#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <utility>

namespace person {
class Person
{
private:
	std::string name{};
	int age{};
public:
	Person() = default;
	Person(const std::string& aname, int argage);
	virtual ~Person();
	Person(const Person& rhs);
	Person& operator=(const Person& rhs);
	Person(Person&& other) noexcept;
	Person& operator=(Person&& other) noexcept;
	std::string get_name() const;
	int get_age() const;
	virtual void call(const Person& p) const = 0;
};
}