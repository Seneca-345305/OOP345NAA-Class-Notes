#include <iostream>
using namespace std;
unsigned fact(unsigned num) {
   if (num <= 2) return num;
   else return num * fact(num - 1);
}
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   cout << fact(4) << endl;
   return 0;
}