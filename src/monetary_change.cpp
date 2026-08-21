#include <iostream>
#include <limits>
using namespace std;

struct CoinBreakdown {
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
};

void ComputeChange(int totCents, int& numQuarters, int& numDimes,
                   int& numNickels, int& numPennies) {
    numQuarters = totCents / 25;
    totCents %= 25;

    numDimes = totCents / 10;
    totCents %= 10;

    numNickels = totCents / 5;
    totCents %= 5;

    numPennies = totCents;
}

bool ReadTotalCents(int& cents) {
    cout << "Enter total cents: ";

    if (!(cin >> cents)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a whole number of cents.\n";
        return false;
    }

    if (cents < 0) {
        cout << "Cents must be zero or greater.\n";
        return false;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return true;
}

void ShowBreakdown(int userCents) {
    int numQuarters = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numPennies = 0;

    ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

    cout << "\nChange breakdown for " << userCents << " cents:\n";
    cout << "Quarters: " << numQuarters << '\n';
    cout << "Dimes: " << numDimes << '\n';
    cout << "Nickels: " << numNickels << '\n';
    cout << "Pennies: " << numPennies << '\n';

    int totalValue = (numQuarters * 25) + (numDimes * 10) +
                     (numNickels * 5) + numPennies;
    cout << "Total value checked: " << totalValue << " cents\n";
}

int ReadMenuChoice() {
    int choice = 0;

    cout << "\nCoin Change Calculator\n";
    cout << "1. Calculate change\n";
    cout << "2. Exit\n";
    cout << "Choose an option: ";

    while (!(cin >> choice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice. Please enter 1 or 2: ";
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2.\n";
        return ReadMenuChoice();
    }

    return choice;
}

int main() {
    int choice = 0;

    do {
        choice = ReadMenuChoice();

        if (choice == 1) {
            int userCents = 0;

            while (!ReadTotalCents(userCents)) {
                cout << "Please try again.\n";
            }

            ShowBreakdown(userCents);
        }

    } while (choice != 2);

    cout << "Goodbye!\n";
    return 0;
}
