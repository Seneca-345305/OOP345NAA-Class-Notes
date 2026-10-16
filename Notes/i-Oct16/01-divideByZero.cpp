#include <iostream>
using namespace std;
bool divide(double a, double b, double& result) {
   if (b == 0.0) {
      return false;
   }
   result = a / b;
   return true;
}

int main() {
   cout << "OOP345NAA - Oct 16" << endl;
   double result;

   if (divide(10, 2, result)) {
      cout << "Result: " << result << endl;
   }
   else {
      cout << "Division failed!" << endl;
   }

   if (divide(10, 0, result)) {
      cout << "Result: " << result << endl;
   }
   else {
      cout << "Division failed!" << endl;
   }
   return 0;
}
