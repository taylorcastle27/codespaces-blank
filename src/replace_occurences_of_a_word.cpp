#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int usaIndex;

   cout << "Enter text: ";
   if (!getline(cin, userText)) {
      cerr << "Unable to read text." << endl;
      return 1;
   }

   // At least one occurrence exists
   while (userText.find("U.S.A.") != string::npos) {
      // Get index of first instance
      usaIndex = userText.find("U.S.A.");

      // U.S.A. is 6 long
      userText.replace(usaIndex, 6, "USA");
   }

   cout << "New text: " << userText<< endl;

   return 0;
}