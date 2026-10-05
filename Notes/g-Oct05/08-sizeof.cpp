#include <iostream>
using namespace std;
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   int x = 5;
   int a[20]{};
   int* p = a;
   cout << sizeof(int) << " " << sizeof(x) << endl;
   cout << "Array size: " << sizeof(a) << " decayed to pointer: " << sizeof(p) << endl;
   return 0;
}