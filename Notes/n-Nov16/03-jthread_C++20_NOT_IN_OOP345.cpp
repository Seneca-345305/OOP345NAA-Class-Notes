#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <thread>
using namespace std;
void sayHello() {
   cout << "Hello from sayHello function" << endl;
}
int main() {
   jthread t(sayHello); // RAII: this is the sayHello gets executed
   cout << "Hello from main function!" << endl;
   return 0;
}
