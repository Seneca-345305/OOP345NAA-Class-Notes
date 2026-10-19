#include <iostream>
#include <set>
using namespace std;
int main() {
   cout << "OOP345NAA - OCT19" << endl;
   set<int> numbers = { 10, 20, 30 };
   for (set<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
      cout << *it << " ";  // Read-only access
   }   return 0;
}