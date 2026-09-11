// Module_a.cpp
#include <iostream>
using namespace std;
static int local = 4;

void display() {
   cout << "A: " << local++ << endl;
}

// Module_b.cpp
#include <iostream>
using namespace std;
static int local = 2;

void display();

int main() {
   display();
   cout << "B: " << local++ << endl;
}