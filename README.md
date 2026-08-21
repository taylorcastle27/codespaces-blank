# C++ Learning Project

This project is set up to help you learn C++ by building and running small programs.

Please feel free to use it for your own purposes.

## What is here

- `src/lesson_01_hello.cpp`: a first program with output, variables, and strings
- `src/lesson_02_types.cpp`: functions, vectors, loops, and references
- `src/mad_libs.cpp`: a simple word-based Mad Libs program
- `exercises/exercise_01_fizzbuzz.cpp`: a basic control-flow exercise
- `exercises/exercise_02_vector_stats.cpp`: a small exercise using vectors and functions
- `src/payroll.cpp`: calculates gross pay from hours and an hourly rate
- `src/restaurant_wait_time.cpp`: estimates a restaurant wait time
- `src/replace_occurences_of_a_word.cpp`: replaces occurrences of `U.S.A.` in text
- `src/nested_loop.cpp`: demonstrates nested loops
- `src/nested_loop_histogram.cpp`: prints a histogram from user input
- `src/savings_intrest_program.cpp`: projects savings over ten years
- `src/oldest_person_vectors.cpp`: looks up ages in a vector
- `src/vectors_with_loops.cpp`: reads and displays vector values
- `src/two_dimensional_array.cpp`: finds driving distances in a two-dimensional array
- `src/test_harness_functions.cpp`: demonstrates assertions in a small test harness
- `src/auction_website_fee_Calculator.cpp`: calculates an auction listing fee

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run

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

## Learning board

See `KANBAN.md` for a kanban-style roadmap that extends the suggested path with next steps, backlog items, and longer-term ideas.