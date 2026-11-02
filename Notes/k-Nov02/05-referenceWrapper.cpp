#include <iostream>
#include <functional>
#include <vector>

using namespace std;

int main() {
   int first = 10;
   int second = 20;
   reference_wrapper<int> wrapper(first);
   reference_wrapper<int> copied(wrapper);
   copied.get() = 15;
   cout << "first after copied.get(): " << first << '\n';
   reference_wrapper<int> other(second);
   wrapper = other;
   wrapper.get() = 25;
   cout << "first: " << first << ", second: " << second << '\n';
   vector<reference_wrapper<int>> references{ copied, wrapper };
   references[0].get() = 30;
   references[1].get() = 40;
   cout << "Through vector: " << first << ' ' << second << '\n';
   return 0;
}