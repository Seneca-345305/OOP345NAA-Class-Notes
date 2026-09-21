// rvalue.cpp
#include <iostream>
#include <string>
using namespace std;
class Car {
   string m_model = "Empty";
public:
   Car(string model);
   void print()const {
      cout << m_model << endl;
   }
};

void printCar(const Car& C) {
   C.print();
}
void printCar(Car&& C) {
   C.print();
}

int main() {
   Car c("bmw");
   printCar(c);
   printCar(Car("Tesla"));
   printCar(move(c));
   return 0;
}