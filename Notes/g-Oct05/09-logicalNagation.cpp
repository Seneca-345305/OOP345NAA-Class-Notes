#include <iostream>
using namespace std;
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   int x = 0;
   cout << !x << endl;   // true (1), since x == 0
   x = 5;
   cout << !x << endl;   // false (0), since x != 0
   cout << !!x << endl;  // true (1), since x = 5;
   return 0;
}