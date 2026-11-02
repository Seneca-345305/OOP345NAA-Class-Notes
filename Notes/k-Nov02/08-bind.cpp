#include <iostream>
#include <functional>

using namespace std;

int multiply(int quantity, int price) {
   return quantity * price;
}
int main() {
   int quantity = 2;
   auto job = bind(multiply, quantity, 5);
   quantity = 4;
   cout << "Current quantity: " << quantity << '\n';
   cout << "Bound result: " << job() << '\n';
   return 0;
}