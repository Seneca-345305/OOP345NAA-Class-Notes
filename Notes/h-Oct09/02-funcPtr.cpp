#include <iostream>
using namespace std;
void sum(int a, int b) {
   cout << (a + b) << endl;
}
void prod(int a, int b) {
   cout << (a * b) << endl;
}
void displayInts(int cnt, int start) {
   for (int i = 0; i < cnt; i++) {
      cout << start + i << " ";
   }
   cout << endl;
}
int main() {
   cout << "OOP345NAA - Oct 09" << endl;
   void (*func)(int, int) = nullptr;
   void (*farr[3])(int, int) = { sum, prod, displayInts };
   cout << reinterpret_cast<unsigned long long>(prod) << endl;
   func = sum;
   func(10, 20);
   func = prod;
   func(10, 20);
   func = displayInts;
   func(10, 20);
   for (int i = 0; i < 3; i++) {
      farr[i](10, 30);
   }
   return 0;
}