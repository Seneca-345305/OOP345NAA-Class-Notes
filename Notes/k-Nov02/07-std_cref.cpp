#include <iostream>
#include <functional>

using namespace std;

int main() {
   int mark = 60;
   auto readOnly = cref(mark);
   cout << "Initially: " << readOnly.get() << '\n';
   // readOnly.get() = 70; // Not allowed: get() returns const int&.
   mark = 85;
   cout << "After changing mark: " << readOnly.get() << '\n';
   return 0;
}