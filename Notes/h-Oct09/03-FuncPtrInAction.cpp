#include <iostream>
using namespace std;
bool isAdult(int num) {
   return num >= 18 && num <= 65;
}
bool validNoOfStudents(int num) {
   return num >= 10 && num <= 35;
}
int getInt(bool (*valid)(int));
auto main() -> int {
   cout << "Enter your age: ";
   int age = getInt(isAdult);
   cout << "age: " << age << endl;
   cout << "Enter number of students: ";
   int noStd = getInt(validNoOfStudents);
   cout << "No of st: " << noStd << endl;
   return 0;
}
int getInt(bool(*valid)(int)) {
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
         else if (valid(num)) {
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
