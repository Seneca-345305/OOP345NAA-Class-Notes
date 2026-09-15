// constexpr.cpp
#include <iostream>
using namespace std;

constexpr int N = 8;

constexpr int factorial(int i) {
   return i > 1 ? i * factorial(i - 1) : 1;
}

int main() {
   cout << N << "! = " << factorial(N) << endl;
}