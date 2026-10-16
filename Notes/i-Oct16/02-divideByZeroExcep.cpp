#include <iostream>
using namespace std;

double divide(double a, double b) {
   if (b == 0.0) {
      throw "Division by zero!";
   }
   return a / b;
}

int main() {
   cout << "Program started" << endl;

   try {
      cout << "Before division" << endl;

      cout << divide(10, 0) << endl;

      cout << "After division" << endl;
   }
   catch (const char* message) {
      cout << "Error: " << message << endl;
   }
   catch (...) {
      cout << "something went wrong!" << endl;
   }

   cout << "Program continues" << endl;
}