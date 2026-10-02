#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double price = 12.34567;
   
   cout << fixed << setprecision(2);
   cout << "Price: $" << price << endl;

   cout << setw(10) << "Apple"
      << setw(8) << 2.50 << endl;

   cout << left << setw(10) << "Orange"
      << right << setw(8) << 3.75 << endl;

   cout << boolalpha;
   cout << "Result: " << true << endl;

   return 0;
}