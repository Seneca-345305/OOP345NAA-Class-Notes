//Resource Acquisition Is Initialization
#include <thread>
#include <iostream>
using namespace std;
void foo(int& num, const char* chars) {
   const char* ptr{};
   for (int i = 0; i < 100000; i++) {
      ptr = chars;
      while (*ptr) {
        // cout << *ptr;
         ptr++;
         num++;
      }
   }
}
int main() {
   int tm{};
   thread Y(foo, ref(tm), "---------------");
   thread X(foo, ref(tm), "^^^^^^^^^^^");
  /* foo(tm, "---------------");
   foo(tm, "^^^^^^^^^^^");*/
   foo(tm, "++++++++++++++++++++++++");
   Y.join();
   X.join();
   cout << endl << "total is: " <<  tm << endl; 
   // because of rece condition the output is not 5000000
   return 0;
}