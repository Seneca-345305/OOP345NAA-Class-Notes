#include <iostream>
using namespace std;
template <typename T1, typename T2>
auto add(T1 n1,T2 n2)-> decltype(n1 + n2) {
   return n1 + n2;
}
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   int a = 10;
   double b = 20.0;
   float c = 30.0;
   long l = 40;
   cout << add(a, l) << endl; // return type is long
   cout << add(a, b) << endl; // return type is double

   return 0;
}