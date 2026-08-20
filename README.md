# 🚀 C++ Mastery — From Zero to Modern C++17

> **A hands-on, progressive C++ curriculum** built for real learning.
> Every program compiles and runs. Every concept is explained in code you can touch and change.

[![Build](https://img.shields.io/badge/build-CMake%203.16+-blue?logo=cmake)](CMakeLists.txt)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-17-blueviolet?logo=cplusplus)](https://en.cppreference.com/w/cpp/17)
[![License: MIT](https://img.shields.io/badge/license-MIT-green)](LICENSE)
[![Open in GitHub Codespaces](https://img.shields.io/badge/Open%20in-GitHub%20Codespaces-24292e?logo=github)](https://codespaces.new/taylorcastle27/codespaces-blank)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen)](CONTRIBUTING.md)

---

## ✨ Why this repo?

Most C++ tutorials stop at "Hello World" and leave you stranded when things get real.
This project is different:

- **Every file is a working program** — clone, build, run, and experiment immediately
- **Progressive difficulty** — lessons build on each other from first principles to modern idioms
- **Real-world mini-projects** — payroll calculator, auction fee tool, savings projector, and more
- **One-click cloud environment** — open in GitHub Codespaces and run instantly, no local setup needed
- **C++17 throughout** — teaches the standard actually used in production today

---

## 📋 Table of Contents

1. [Quick Start](#-quick-start)
2. [Open in Codespaces (Zero Setup)](#-open-in-codespaces-zero-setup)
3. [Curriculum Overview](#-curriculum-overview)
4. [File Reference](#-file-reference)
5. [Build & Run](#-build--run)
6. [Learning Roadmap](#-learning-roadmap)
7. [Advanced Topics Preview](#-advanced-topics-preview)
8. [C++ Quick Reference](#-c-quick-reference)
9. [Contributing](#-contributing)

---

## ⚡ Quick Start

```bash
git clone https://github.com/taylorcastle27/codespaces-blank.git
cd codespaces-blank
cmake -S . -B build
cmake --build build
./build/lesson_01_hello
```

---

## ☁️ Open in Codespaces (Zero Setup)

Click the badge below to launch a fully configured cloud environment with CMake, GCC, and the C++ extension pre-installed — no installation required on your machine.

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/taylorcastle27/codespaces-blank)

Once inside Codespaces, open the terminal and run:

```bash
cmake -S . -B build && cmake --build build
./build/lesson_01_hello
```

---

## 📚 Curriculum Overview

| Stage | Topic | Files |
|-------|-------|-------|
| 1 — Foundations | Output, variables, strings | `lesson_01_hello.cpp` |
| 2 — Functions & Containers | Functions, vectors, loops, references | `lesson_02_types.cpp` |
| 3 — Control Flow | Conditionals, loops, FizzBuzz | `exercise_01_fizzbuzz.cpp` |
| 4 — Algorithms on Data | Vector statistics, min/max/avg | `exercise_02_vector_stats.cpp` |
| 5 — String Manipulation | Search and replace in text | `replace_occurences_of_a_word.cpp` |
| 6 — Nested Structures | 2D arrays, nested loops, histograms | `nested_loop.cpp`, `two_dimensional_array.cpp` |
| 7 — Real-World Programs | Payroll, savings, restaurant wait | `payroll.cpp`, `savings_intrest_program.cpp` |
| 8 — Testing | Assertions, test harness without a framework | `test_harness_functions.cpp` |
| 9 — Interactive Programs | Mad Libs, user-driven input | `mad_libs.cpp` |

---

## 📁 File Reference

### Lessons

| File | What you'll learn |
|------|-------------------|
| `src/lesson_01_hello.cpp` | `std::cout`, `std::string`, variables, program structure |
| `src/lesson_02_types.cpp` | Functions with return values, `std::vector`, range-based `for`, pass-by-reference |

### Exercises

| File | Challenge |
|------|-----------|
| `exercises/exercise_01_fizzbuzz.cpp` | Classic control-flow with `if`/`else` and modulo |
| `exercises/exercise_02_vector_stats.cpp` | Build functions that compute min, max, and average over a vector |

### Mini-Projects

| File | What it does |
|------|--------------|
| `src/payroll.cpp` | Computes gross pay from hours worked and hourly rate |
| `src/restaurant_wait_time.cpp` | Estimates wait time based on party size and table availability |
| `src/savings_intrest_program.cpp` | Projects a savings account balance over ten years with compound interest |
| `src/auction_website_fee_Calculator.cpp` | Calculates tiered listing fees for an auction platform |
| `src/mad_libs.cpp` | Interactive word-based story generator using `std::cin` |

### Demonstrations

| File | Concept demonstrated |
|------|---------------------|
| `src/replace_occurences_of_a_word.cpp` | `std::string::find` and `replace` in a loop |
| `src/nested_loop.cpp` | Nested `for` loops and multiplication tables |
| `src/nested_loop_histogram.cpp` | Building a bar chart from user-supplied numbers |
| `src/oldest_person_vectors.cpp` | Iterating a vector to find a maximum value |
| `src/vectors_with_loops.cpp` | Reading values into a vector and printing them back |
| `src/two_dimensional_array.cpp` | Row-column lookup in a 2D distance matrix |
| `src/test_harness_functions.cpp` | Writing your own `assert`-style test runner from scratch |

---

## 🔨 Build & Run

### Build everything

```bash
cmake -S . -B build   # configure (run once)
cmake --build build    # compile all targets
```

### Run any program

```bash
./build/lesson_01_hello
./build/lesson_02_types
./build/mad_libs
./build/exercise_01_fizzbuzz
./build/exercise_02_vector_stats
./build/payroll
./build/restaurant_wait_time
./build/replace_occurences_of_a_word
./build/nested_loop
./build/nested_loop_histogram
./build/savings_intrest_program
./build/oldest_person_vectors
./build/vectors_with_loops
./build/two_dimensional_array
./build/test_harness_functions
./build/auction_website_fee_calculator
```

### Run the built-in test suite

```bash
cd build && ctest --output-on-failure
```

---

## 🗺️ Learning Roadmap

Follow this sequence for a structured progression from beginner to intermediate C++17:

```
Week 1 — Foundations
  └─ lesson_01_hello → lesson_02_types → exercise_01_fizzbuzz

Week 2 — Data & Algorithms
  └─ exercise_02_vector_stats → vectors_with_loops → oldest_person_vectors

Week 3 — Real Programs
  └─ payroll → savings_intrest_program → restaurant_wait_time → auction_website_fee_Calculator

Week 4 — Strings & 2D Data
  └─ replace_occurences_of_a_word → nested_loop → nested_loop_histogram → two_dimensional_array

Week 5 — Interactive & Testing
  └─ mad_libs → test_harness_functions

Week 6 — Your Own Project
  └─ Build a CLI calculator, a contact book, or a text-based game using what you've learned
```

---

## 🧠 Advanced Topics Preview

Once you've finished the curriculum above, these are the natural next steps in C++17:

### Memory & Ownership
- `std::unique_ptr` and `std::shared_ptr` — automatic memory management without `new`/`delete`
- RAII (Resource Acquisition Is Initialization) — the pattern that makes C++ safe
- Move semantics — `std::move` and rvalue references for zero-copy performance

### Object-Oriented Design
- Classes, constructors, destructors, and the Rule of Five
- Inheritance and virtual dispatch — runtime polymorphism
- Abstract base classes and pure virtual functions

### Templates & Generic Programming
- Function templates — write once, use with any type
- Class templates — `std::stack<T>`, `std::pair<K,V>` and how to build your own
- Template specialization and SFINAE basics

### The Standard Library (STL)
- `std::algorithm` header — `std::sort`, `std::find`, `std::transform`, `std::accumulate`
- `std::map`, `std::unordered_map` — key-value lookup in O(log n) and O(1)
- `std::optional`, `std::variant`, `std::any` — modern type-safe value containers

### Concurrency (C++11/14/17)
- `std::thread` — spawning and joining threads
- `std::mutex` and `std::lock_guard` — protecting shared data
- `std::async` and `std::future` — task-based parallelism

### Modern Idioms
- Lambda expressions and `std::function`
- Structured bindings: `auto [key, value] = ...`
- `if constexpr` — compile-time branching
- `std::string_view` — non-owning string references for performance

---

## 📖 C++ Quick Reference

<details>
<summary><strong>Click to expand the cheat sheet</strong></summary>

### Variables & Types
```cpp
int age = 25;
double price = 9.99;
bool active = true;
std::string name = "Taylor";
```

### Vectors
```cpp
#include <vector>
std::vector<int> nums = {1, 2, 3, 4, 5};
nums.push_back(6);          // append
int first = nums[0];        // index access
int size  = nums.size();    // length
```

### Range-based for loop
```cpp
for (const auto& n : nums) {
    std::cout << n << "\n";
}
```

### Functions
```cpp
double average(const std::vector<int>& v) {
    double sum = 0;
    for (int x : v) sum += x;
    return sum / v.size();
}
```

### Smart Pointers
```cpp
#include <memory>
auto ptr = std::make_unique<int>(42);  // owns the int
auto shared = std::make_shared<std::string>("hello");
```

### STL Algorithms
```cpp
#include <algorithm>
#include <numeric>
std::sort(v.begin(), v.end());
int total = std::accumulate(v.begin(), v.end(), 0);
auto it   = std::find(v.begin(), v.end(), 3);
```

### Lambda Expressions
```cpp
auto square = [](int x) { return x * x; };
std::transform(v.begin(), v.end(), v.begin(), square);
```

</details>

---

## 🤝 Contributing

Contributions are welcome! Here's how to add a new lesson or exercise:

1. Fork the repo and create a branch: `git checkout -b add-my-lesson`
2. Add your `.cpp` file under `src/` (lesson) or `exercises/` (exercise)
3. Add a corresponding `add_executable(...)` line in `CMakeLists.txt`
4. Add a one-line entry in the **File Reference** table in this README
5. Open a pull request with a short description of what concept it teaches

Please keep each file focused on a single concept and ensure it compiles cleanly with `-Wall -Wextra -Wpedantic`.

---

> ⭐ **If this repo helped you learn something, please star it!** It helps other learners find it.
