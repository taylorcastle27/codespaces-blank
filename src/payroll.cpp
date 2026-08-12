#include <iomanip>
#include <iostream>

int main() {
    double hours;
    double hourly_rate;

    std::cout << "Enter hours worked: ";
    std::cin >> hours;

    std::cout << "Enter hourly rate: ";
    std::cin >> hourly_rate;

    const double gross_pay = hours * hourly_rate;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Gross pay: $" << gross_pay << '\n';

    return 0;
}
