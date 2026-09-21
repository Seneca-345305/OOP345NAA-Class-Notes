// range_for.cpp
#include <iostream>
using namespace std;

int main() {
   int a[]{ 1, 2, 3, 4, 5, 6 };

   for (auto e : a) {
      cout << (e += 2) << " ";
   }
   cout << endl;
   for (auto& e : a)
      cout << e << " ";
   cout << endl;
   for (auto& e : a) {
      cout << (e += 2) << " ";
   }
   cout << endl;
   for (auto& e : a)
      cout << e << " ";
   cout << endl;
   return 0;
}