#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int sum_values(const std::vector<int>& values) {
    return std::accumulate(values.begin(), values.end(), 0);
}

double average_values(const std::vector<int>& values) {
    if (values.empty()) {
        return 0.0;
    }

    return static_cast<double>(sum_values(values)) / values.size();
}

void print_report(const std::string& label, const std::vector<int>& values) {
    std::cout << label << ": ";

    for (int value : values) {
        std::cout << value << ' ';
    }

    std::cout << "\ncount: " << values.size() << "\n";
    std::cout << "sum: " << sum_values(values) << "\n";
    std::cout << "average: " << average_values(values) << "\n";
}

int main() {
    std::vector<int> scores{88, 92, 79, 95, 84};

    print_report("Scores", scores);

    return 0;
}