//Custom compile - time checks.
//If the condition fails, compilation stops with an error.
// static_assert.cpp
#include <iostream>
using namespace std;

constexpr int N = 0;

constexpr int factorial(int i) {
   return i > 1 ? i * factorial(i - 1) : 1;
}

int main() {
   static_assert(N > 0, "N must be > 0");
   static_assert(N < 20, "N must be < 20");
   cout << N << "! = " << factorial(N) << endl;
}