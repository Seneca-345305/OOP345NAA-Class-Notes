#include <iostream>
using namespace std;

typedef const int constInt; // alias

using IntAlias = int;       // modern alias
using dblPtr = double*;    // moden alias for a double pointer instead of typedef

typedef int* intPtr;
int main() {
   constInt x = 5;
   IntAlias y = 10;
   int* a, b; // a is a pointer and b is an integer
   intPtr p, q; // p and q are both pointers

   cout << x << ", " << y << endl;
}