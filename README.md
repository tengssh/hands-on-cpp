# Hands-on C++

This repository contains the notes and code snippets for the following C++ training courses:
- [C++ for Beginner](https://indico.ecap.work/event/195/) by Slobodan Dmitrovic
- [Modern C++ Software Design](https://indico.ecap.work/event/196/) by Klaus Igelberger

## C++ for Beginner
<details>
<summary><a href="./cpp-beginner/Day1">Day1</a></summary>

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
<summary><a href="./cpp-beginner/Day2">Day2</a></summary>

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
<details>
<summary><a href="./cpp-beginner/Day3">Day3</a></summary>

- Class
  - Inheritance: `class DerivedClass : public BaseClass`
    - Move semantics
      - `#include <utility>`
      - `std::move(O)`
      - Move constructors
        - `BaseClass(BaseClass&& rhs) : xb{std::move(rhs.xb)}{}`
        - `DerivedClass(DerivedClass&& rhs) noexcept : BaseClass(std::move(rhs)), xd{std::move(rhs.xd)}{}`
      - Move assignment operator
        - `DerivedClass& operator=(DerivedClass&& rhs){ Base::operator=(std::move(rhs)); x = std::move(rhs.x); return *this; }`
    - Operator overloading
      - Member or freestanding functions
    - lvalue (`const Cls& rhs`) & rvalue (`Cls&& rhs`) reference
  - Polymorphism
    - (1) inheritance, (2) interfaces, (3) pointers
    - Virtual functions
      - `virtual TYPE v_fn() = 0` (pure virtual function)
      - `virtual ~Cls(){}` (destructor for `delete`)
    - `BaseClass* p_k = new DerivedClass_k; p_k->v_fn();`
- Smart pointers
  - `#include <memory>`
  - Unique pointers
    - `std::unique_ptr<TYPE> up = std::make_unique<TYPE>(ARGS)`
  - Shared pointers
    - `std::shared_ptr<TYPE> sp = std::make_shared<TYPE>(ARGS)`
- The `static` specifier
  - Static storage duration
  - In local/global scope
  - Class members: `Cls::member`

</details>
<details>
<summary><a href="./cpp-beginner/Day4">Day4</a></summary>

- Template (generic programming)
  - `template <typename T>`, `template <class T>`
  - Template specialization: `template <>`
- C++ Standard Library
  - `<vector>`: `std::vector<TYPE> v = {...};`
    - `v.push_back(new_element);`
    - `v[0]`, `v.at(1)`
    - Iterators: `auto it = v.begin();`, `it++;`, `*it`, `v.end()`
    - Range-based loops: `for (const auto& el : v){...;}`
    - `v.size()`
  - `<list>` (doubly-linked list): `std::list<TYPE> l = {...};`
  - `<forward_list>` (singly-linked list): `std::forward_list<TYPE> fl = {...};`
  - `<array>`: `std::array<TYPE, N> a = {...};` (fixed size)
  - `<set>` (unique elements): `std::set<TYPE> s = {...};`
    - `s.insert(new_element);`
    - `s.empty();`
    - `s.clear();`
  - `<map>` (unique key elements): `std::map<TYPE_KEY, TYPE_VALUE> m = {{...}, {...}};`
    - `m.insert({key, value});`
    - `m[key]`
    - Iterators: `auto it = m.find(key);` (`it != m.end()`)
    - `m.erase(key);`
    - `el.first` (key), `el.second` (value)
  - `<iterator>`
    - `std::advance(it, 2);`
  - `<utility>`
    - `std::pair<TYPE_KEY, TYPE_VALUE> pr = std::make_pair(key, value);`
  - `<algorithm>`
    - `std::sort(v.begin(), v.end());`, `std::sort(v.begin(), v.end(), std::greater<int>());`
    - `std::reverse(v.begin(), v.end());`
    - `std::find(v.begin(), v.end(), element);`
    - `std::copy(copy_from.begin(), copy_from.end(), copy_to.begin());`
    - `std::min_element(std::begin(v), std::end(v));`, `std::max_element(std::begin(v), std::end(v));`
    - `std::replace(v.begin(), v.end(), old, new);`

</details>
<details>
<summary><a href="./cpp-beginner/Day5">Day5</a></summary>

- Lambda expressions: `[captures](params){code;}`, `auto f_lambda = [](){};`
- Input/output streams
  - `#include <fstream>`
    - `std::fstream fs;`, `std::fstream fs{"FILE", MODE};`
    - `fs.open("FILE", MODE)`
      - Read mode: `std::ios::in`
        - `fs >> c;`, `std::getline(fs, str);`
        - `std::noskipws` (no skipping spaces)
      - Write mode: `std::ios::out`, `std::ios::app`
        - `fs << "TEXT";`
    - `fs.is_open()`
    - `fs.close();`
  - `#include <sstream>`
    - `std::istringstream` (read), `std::ostringstream` (write), `std::stringstream` (read or write)
    - `std::stringstream ss{"STRING", MODE}; std::cout << ss.str();`
- C++ standards
  - C++11 standard
    - Anything below C++11 should not be used.
    - `auto`
    - Range-based loops
    - Initializer lists
    - Move semantics
    - Lambda expressions
    - The constexpr specifier: `constexpr`
    - Scoped enumerator: `enum class NAME { A, B, C };`, `enum class NAME : TYPE { A, B, C };`
    - Smart pointers
    - Unordered set
      - `#include <unordered_set>`
      - `std::unordered_set<TYPE> s = {...};`
    - Unordered maps
      - `#include <unordered_map>`
      - `std::unordered_map<KEY_TYPE, VALUE_TYPE> m = {{key, value}, ...};`
    - Tuple (more values than `std::pair`)
      - `#include <tuple>`
      - `std::tuple<TYPE1, TYPE2, TYPE3, ...> t = {...};`
    - `static_assert(a == b, "MESSAGE");`
    - `=default;`, `=delete;`
    - Type aliases: `using new_type_name = TYPE; new_type_name var = value;`
  - C++14 standard
    - Binary literals: `0b...`
    - Digit separators: `1'000'000`
    - `auto func(){}`, `auto f_lambda = [](auto v){}`
    - `std::make_unique`
  - C++17 standard
    - Nested namespaces: `namespace A::B::C {...}`
    - Structured bindings
      - `auto [v1, v2, ..., vn] = array;` (`v1` = `array[0]`)
      - `auto& [r1, r2, ..., rn] = array;` (`r1` = `array[0]`)
    - File system
      - `#include <filesystem>`
    - String view
      - `#include <string_view>`
      - `std::string_view sv(str);`, `std::string_view sv(str.c_str(), N_CHAR);`
    - Any type
      - `#include <any>`
      - `std::any a = value;`, `std::any_cast<TYPE>(a)`
    - Variant (type-safe union)
      - `#include <variant>`
      - `std::variant<TYPE1, TYPE2, ...> vt{VALUE1};`
      - `std::get<0>(vt)`, `std::get<TYPE1>(vt)`
      - `vt = VALUE2;`
      - `std::get<1>(vt)`, `std::get<TYPE2>(vt)`

</details>

## Modern C++ Software Design
<details>
<summary>20261007</summary>

- Standard Library & Standard Template Library (STL)
  - No raw loops.
  - Algorithms library
    - `std::shuffle`
    - `std::min_element`
    - `std::sort`, `std::stable_sort`
    - `std::accumulate`
    - `std::transform_reduce`
    - `std::fold_left` (C++23)
    - `std::rotate`
    - `std::nth_element`
    - `std::ranges` (C++20)
      - The same performance, easier to use
  - Iterators
    - Raw C array does not have member iterators. => Use `std::begin()`, `std::end()`
  - Naming is important. => Readability
  - Explicit type for the initial values (e.g., `int{}`)
  - DRY (Don't Repeat Yourself)
    - In-line lambda (faster) vs. Lambda pointer (runtime overhead)
    - Function objects (compile-time optimization)
      - `struct NAME {void operator()(TYPE args){...}};` (call operators overload)
      - Lambda factory: `auto conditional_lambda(TYPE args){return [args](){...;}}`
- Templates
  - Template instantiation/specialization
    - Name lookup
    - Template argument deduction
    - Overload resolution (Exact match > Promotion > Standard conversion > User-defined conversion)
    - SFINAE (Substitution Failure Is Not An Error)
  - Type trait
    - `auto` requires a unified type for all return statements.
    - `using Return = typename std::common_type<T,U>::type;`
    - `return Return();`
  - Conditional (ternary) operator
    - `( a < b ? b : a )`
    - Expression, not a statement

</details>
<details>
<summary>20261008</summary>

- Templates
  - Concepts (C++20)
    - Compile-time `bool` evaluation
    - `std::integral<T>`
    - Type traits
      - `std::is_convertible_v<T, int>`
      - `std::is_arithmetic_v<T>`
      - `std::remove_cv_t<T>` (type transformation)
    - Requires expression (checks whether requirements are valid for compilation)
      - `requires(T t, ...);` (wish list)
      - `typename T::iterator`, `typename T::const_iterator`, `typename T::value_type`
      - `{ t.begin() } -> std::same_as<typename T::iterator>;`
      - `(... or ...) and ...;`
- Class design
  - (Default) Constructor & Destructor
  - Object lifetimes
    - Stack
    - Constructed in declaration order and destructed in reverse order
    - Scope
    - Smart pointers (deterministic) => RAII
  - RAII (Resource Acquisition Is Initialization)
  - The Special Member Functions (SMFs)
  - Initialization
    - Static storage duration: zero-initialization
    - Default initialization
    - Value initialization
    - Default member initialization
    - Member initializer list
    - Aggregate initialization
  - Copy semantics
    - Copy constructor & Copy assignment operator
    - Self-assignment
    - Copy-and-swap idiom
  - Move semantics
    - Move constructor & Move assignment operator
    - Lvalue and Rvalue
      - Roughly speaking, lvalue has a name; rvalue does not have a name.
      - Xvalue (Expiring value): `std::move(lvalue)`
      - Lvalues can be copied; rvalues can often be moved.
    - Move-and-swap idiom
  - The Rule of Five/Zero
    - Destructor
    - Copy Ctor
    - Copy assignment operator
    - Move Ctor
    - Move assignment operator

</details>
<details>
<summary>20261009</summary>

- Class design
  - Order of member data
    - Alignment (4-byte on x64/ARM)
      - `alignof(char)`: 1
      - `alignof(*ptr)`: 8
      - `alignof(EmptyClass)`: 1
    - Padding
    - General principles: larger members first
  - Code review
    - Const correctness
    - Initialization & RAII
    - Naming
    - No raw loops
    - Header guard
      - Don't use the reserved names: `__...`, `_I`
      - One-Definition Rule (ODR)
      - Alternative: `#pragma once`
    - `#include`
      - Static code analysis
    - `using` directive
      - Name collisions
    - Taste
    - Documentation
    - Also give positive motivated feedback
- Dynamic polymorphism
  - OOP (Object-Oriented Programming)
  - Inheritance
    - ABC (Abstract Base Class)
    - Virtual dispatch
      - Virtual functions
      - Virtual pointers & virtual function table (overhead)
      - `override`
    - Virtual destructor
  - Design patterns
    - The strategy design pattern
      - Template
      - Unique pointers & move semantics
      - Dependency injection
- AI
  - Human-in-the-loop
  - Documentation (use but verify)

</details>

## References
- https://cppreference.com/
- https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
