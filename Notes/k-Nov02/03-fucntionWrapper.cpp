#include <iostream>
#include <functional>

using namespace std;

int add(int left, int right) {
   return left + right;
}
struct Add {
   int operator()(int left, int right) const {
      return left + right;
   }
};
int main() {
   function<int(int, int)> operation = add;
   cout << operation(3, 4) << '\n';
   operation = Add{};
   cout << operation(3, 4) << '\n';
   operation = [](int left, int right) { return left + right; };
   cout << operation(3, 4) << '\n';
   return 0;
}