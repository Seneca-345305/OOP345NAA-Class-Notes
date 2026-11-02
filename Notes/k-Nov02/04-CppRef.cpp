#include <iostream>

using namespace std;

int main() {
   int first = 10;
   int second = 20;
   int& alias = first;
   alias = 11;
   cout << "After alias = 11: " << first << '\n';
   alias = second;
   second = 99;
   cout << "first: " << first << '\n';
   cout << "alias: " << alias << '\n';
   cout << "second: " << second << '\n';
   return 0;
}