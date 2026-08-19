#include <iostream>
using namespace std;

int main() {
   int waitTime;
   int partySize;
   char day;
   bool isLargeParty;
   bool isWeekend;
   
   // Get day of reservation
   cout << "Day of reservation (T/W/R/F/S/U): ";
   if (!(cin >> day) || (day != 'T' && day != 'W' && day != 'R' && day != 'F' && day != 'S' && day != 'U')) {
      cerr << "Enter one of: T, W, R, F, S, or U." << endl;
      return 1;
   }
   if (day == 'F' || day == 'S' || day == 'U') {
      isWeekend = true;
   }
   else {
      isWeekend = false;
   }
   
   // Get party size
   cout << "Enter party size: ";
   if (!(cin >> partySize) || partySize < 1) {
      cerr << "Party size must be a positive integer." << endl;
      return 1;
   }
   isLargeParty = (partySize > 6);
   
   // Determine wait time based on day of week and party size
   if (isWeekend && !isLargeParty) {
      waitTime = 30;
   }
   else if (!isWeekend && !isLargeParty) {
      waitTime = 10;
   }
   else if (isWeekend && isLargeParty) {
      waitTime = 45;
   }
   else {
      waitTime = 15;
   }
   
   cout << "Restaurant wait time is " << waitTime
        << " minutes." << endl;
   
   return 0;
}