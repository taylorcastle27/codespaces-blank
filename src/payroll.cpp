#include <iomanip>
#include <iostream>

int main() {
    double hours;
    double hourly_rate;

    std::cout << "Enter hours worked: ";
    if (!(std::cin >> hours) || hours < 0) {
        std::cerr << "Hours worked must be a non-negative number.\n";
        return 1;
    }

    std::cout << "Enter hourly rate: ";
    if (!(std::cin >> hourly_rate) || hourly_rate < 0) {
        std::cerr << "Hourly rate must be a non-negative number.\n";
        return 1;
    }

    const double gross_pay = hours * hourly_rate;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Gross pay: $" << gross_pay << '\n';

    return 0;
}
