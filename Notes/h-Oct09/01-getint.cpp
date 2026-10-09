#include <iostream>
using namespace std;
bool isAdult(int num) {
   return num >= 18 && num <= 65;
}
bool validNoOfStudents(int num) {
   return num >= 10 && num <= 35;
}
int getInt();
int main() {
   cout << "OOP345NAA - Oct 09" << endl;
   return 0;
}

int getInt() {
   int num{};
   bool done = false;
   do {
      cin >> num;
      if (cin.fail()) {
         cin.clear();
         cout << "Invlid integer, try again...\n> ";
      }
      else {
         if (cin.peek() != '\n') {
            cout << "Only an integer number please...\n> ";
         }
         else if (isAdult(num)) {
            done = true;
         }
         else {
            cout << "No children or Seniors permitted...\n> ";
         }
      }
      cin.ignore(10000, '\n');
   } while (!done);
   return num;
}