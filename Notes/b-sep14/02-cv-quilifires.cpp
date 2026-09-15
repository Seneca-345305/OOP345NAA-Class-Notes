// cv.cpp
#include <iostream>
using namespace std;

int main() {
   const int ci = 10;  // read-only
   volatile int vi = 20; // may change unexpectedly
   cout << ci << " " << vi << endl;
}