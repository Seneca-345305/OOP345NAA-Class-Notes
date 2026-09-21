// array.cpp
#include <iostream>
using namespace std;
void foo(int a[]) {
   cout << sizeof(a) << endl;
}
int main() {
   int a[5] = { 1, 2, 3, 4, 5 }; // aggregate initialization
   cout << sizeof(a) << endl;
   foo(a);
   return 0;
}