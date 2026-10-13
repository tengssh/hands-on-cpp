#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <utility>

// Implement a namespace
namespace person {
class Person
{
private:
	std::string name{};
	int age{};
public:
	// constructor
	Person() = default;
	Person(const std::string& aname, int argage);
	// destructor
	virtual ~Person();
	// copy semantics for a base class:
	Person(const Person& rhs);
	Person& operator=(const Person& rhs);
	// move semantics
	Person(Person&& other) noexcept;
	Person& operator=(Person&& other) noexcept;
	// Implement several getters and setters
	std::string get_name() const;
	int get_age() const;
	// Bonus requirement:
	// Create one or more virtual member functions
	virtual void call(const Person& p) const = 0;
};
}