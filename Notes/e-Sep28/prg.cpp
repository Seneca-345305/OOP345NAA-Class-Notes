#include <iostream>
#include "DynArray.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP345NAA - Sep 28" << endl;
   DynArray<char> C(20);
   DynArray<double> D(5);
   for (int i = 0; i < D.size(); i++) {
      D[i] = (i + 1) * 1.23;
   }
   for (int i = 0; i < C.size(); i++) {
      C[i] = 'A' + i;
   }
   cout << D << endl;
   cout << C << endl;
   return 0;
}