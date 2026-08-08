# C++ Learning Project

This project is set up to help you learn C++ by building and running small programs.

## What is here

- `src/lesson_01_hello.cpp`: a first program with output, variables, and strings
- `src/lesson_02_types.cpp`: functions, vectors, loops, and references
- `exercises/exercise_01_fizzbuzz.cpp`: a basic control-flow exercise
- `exercises/exercise_02_vector_stats.cpp`: a small exercise using vectors and functions

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run

```bash
./build/lesson_01_hello
./build/lesson_02_types
./build/exercise_01_fizzbuzz
./build/exercise_02_vector_stats
```

## Suggested path

1. Read `src/lesson_01_hello.cpp` and change the printed values.
2. Read `src/lesson_02_types.cpp` and add one more function.
3. Modify the fizzbuzz exercise to print from `1` to `50` instead of `30`.
4. Change the vector stats exercise to also compute the median.
5. Create your own file for a small calculator or todo CLI.

## Concepts to learn next

1. `std::string`, `std::vector`, and references
2. structs and classes
3. constructors and object lifetime
4. smart pointers and RAII
5. STL algorithms like `std::sort`, `std::find`, and `std::accumulate`