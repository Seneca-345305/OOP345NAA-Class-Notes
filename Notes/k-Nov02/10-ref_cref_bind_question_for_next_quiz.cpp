#include <iostream>
#include <functional>

using namespace std;

void increment(int& value) {
   ++value;
}
void show(const int& value) {
   cout << value << '\n';
}
int main() {
   int value = 10;
   auto incrementCopy = bind(increment, value);
   auto incrementOriginal = bind(increment, ref(value));
   incrementCopy();
   cout << "After incrementCopy: " << value << '\n';
   incrementOriginal();
   cout << "After incrementOriginal: " << value << '\n';
   auto showCopy = bind(show, value);
   auto showOriginal = bind(show, cref(value));
   value = 20;
   cout << "Saved value: ";
   showCopy();
   cout << "Current original: ";
   showOriginal();
   return 0;
}