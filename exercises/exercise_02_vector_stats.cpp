#include <algorithm>
#include <iostream>
#include <vector>

int find_minimum(const std::vector<int>& values) {
    return *std::min_element(values.begin(), values.end());
}

int find_maximum(const std::vector<int>& values) {
    return *std::max_element(values.begin(), values.end());
}

int main() {
    std::vector<int> values{4, 8, 15, 16, 23, 42};

    std::cout << "min: " << find_minimum(values) << "\n";
    std::cout << "max: " << find_maximum(values) << "\n";
    std::cout << "task: add a function that computes the sum\n";

    return 0;
}