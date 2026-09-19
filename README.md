# Hands-on C++

This repository contains the code for the exercises from the course "Introduction to the C++ Programming Language" by Slobodan Dmitrovic. The course description can be found on the [website](https://indico.ecap.work/event/195/).

## C++ for Beginner
<details>
<summary><a href="./Day1">Day1</a></summary>

- Compiler
  - Install: `sudo apt install g++`
  - Compile: `g++ -Wall -std=c++11 source.cpp && ./a.out`
- Headers: `#include <iostream>`, `#include <string>`
- Types: `char`, `int`, `double`, `bool`, `std::string`, `long`, `unsigned`, `auto`, `const`/`constexpr`
- Arrays: `int arr[3] = {1, 2, 3};`
- Strings
- Standard I/O: `std::cin`, `std::cout`, `std::getline(std::in, string)`
- Operators
- Pointer & Reference
- Statements: selection, iteration, etc.
- Functions
  - Function declaration & definition
  - Passing by value/reference/const-reference
  - Function overloading

</details>
<details>
<summary><a href="./Day2">Day2</a></summary>

- Scope
  - Storage duration: automatic, dynamic, static
- `new` & `delete`
  - Stack & Heap
  - Memory leak
- Enum
  - Unscoped: `eum ENUM_NAME {A, B, C};`
  - Scoped: `enum class ENUM_NAME {};`, `enum ENUM_NAME : TYPE {};`
- Namespace: `namespace { ...; }`
- Header & Source files
  - Standard libraries: `#include <*>`
  - User-defined libraries: `#include "*.h"`
    - Header guards: `#ifndef ID #define ID ... #endif`
  - Compile: `g++ -Wall -std=c++11 *.cpp && ./a.out`
- Conversions
  - Implicit vs. Explicit
  - `static_cast<int>(3.14);`
- Exceptions
  - `try`: `throw type;`
  - `catch (exception_type e) { e.what(); }`
- Strings
  - `str.at(index)`, `str.length()`
- Class: `class CLASS_NAME {};`
  - Access specifiers: public/protected/private members
  - Member functions
    - Setter & Getters
  - Constructors: `CLASS_NAME(){}`
    - Member initializer list
    - Copy constructor: `const CLASS_NAME& cls`
    - Copy assignment operator: `CLASS_NAME& operator=(CLASS_NAME&& cls) { return *this }`
  - Destructors: `~CLASS_NAME(){}`
  - Encapsulation
- Class vs. Struct
  - Class: private access by default
  - Struct: public access by default

</details>