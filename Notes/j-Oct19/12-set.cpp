#include <iostream>
#include <set>
using namespace std;
int main() {
   cout << "OOP345NAA - OCT19" << endl;
   set<int> numbers = { 30, 10, 20 };  // Automatically sorted

   // Add elements
   numbers.insert(25);
   numbers.insert(10);              // Duplicate ignored

   // Search for an element
   auto it = numbers.find(25);
   if (it == numbers.end()) {
      cout << "not found!" << endl;
   }
   else {
      cout << *it << " is in the set." << endl;
   }

   // Print all elements
   cout << "Set contents: ";
   for (int num : numbers) {
      cout << num << " ";
   }
   return 0;
}