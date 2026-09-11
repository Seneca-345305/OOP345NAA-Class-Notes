// building_blocks.cpp
#include <iostream>
using namespace std;

int main() {
   int x = 10;       // variable (named object)
   int& ref = x;     // reference
   cout << "x = " << x << ", ref = " << ref << endl;
}