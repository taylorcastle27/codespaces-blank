#include <iostream>
using namespace std;

int main() {
   double initialSavings;  // User-entered initial savings
   double interestRate;    // Interest rate
   double currSavings;     // Current savings with interest
   int i;                  // Loop variable

   cout << "Enter initial savings: ";
   if (!(cin >> initialSavings) || initialSavings < 0) {
      cerr << "Initial savings must be a non-negative number." << endl;
      return 1;
   }

   cout << "Enter interest rate: ";
   if (!(cin >> interestRate)) {
      cerr << "Interest rate must be a number." << endl;
      return 1;
   }

   cout << endl << "Annual savings for 10 years: " << endl;

   currSavings = initialSavings;
   for (i = 0; i < 10; ++i) {
      cout << "$" << currSavings << endl;
      currSavings = currSavings + (currSavings * interestRate);
   }

   return 0;
}