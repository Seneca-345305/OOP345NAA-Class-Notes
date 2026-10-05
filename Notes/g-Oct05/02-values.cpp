// value_categories.cpp
#include <iostream>
using namespace std;

int main() {
   int x = 10;          // x is an lvalue
   cout << x << endl;   // 'x' refers to a memory location

   int y = x + 5;       // (x + 5) is a prvalue
   cout << y << endl;

   int&& z = x + 5;     // result of (x + 5) materializes into an xvalue
   cout << z << endl;

   return 0;
}