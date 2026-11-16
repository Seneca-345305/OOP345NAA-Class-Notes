//Resource Acquisition Is Initialization
#include <thread>
#include <iostream>
using namespace std;
void foo(int& num, const char* chars) {
   num = 0;
   const char* ptr{};
   for (int i = 0; i < 10; i++) {
      ptr = chars;
      while (*ptr) {
         cout << *ptr++;
         num++;
      }
   }
}
int main() {
   int tm{}, tx{}, ty{};
   thread Y(foo, ref(ty), "---------------");
   thread X(foo, ref(tx), "^^^^^^^^^^^");
   foo(tm, "++++++++++++++++++++++++");
   Y.join();
   X.join();
   cout << endl << "Thread X printed " << tx << " chars!" << endl;
   cout << "Thread Y printed " << ty << " chars!" << endl;
   cout << "the main thread printed " << tm << " chars!" << endl;
   return 0;
}