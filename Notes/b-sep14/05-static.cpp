// static.cpp
#include <iostream>
using namespace std;

void display() {
   static int n = 1;
   cout << "n is " << n++ << endl;
}

int main() {
   display(); // n is 1
   display(); // n is 2
}