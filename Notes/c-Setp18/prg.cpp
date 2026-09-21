// statics are shared among all instances.

// class_static.cpp
#include <iostream>
using namespace std;

class Counter {
   static int count;
   char yellow;
public:
   Counter() { ++count; }
   ~Counter() { --count; }
   static int getCount() { return count; }
   void print()const {
      cout << yellow << endl;
      cout << count << endl;
   }
};

int Counter::count{};

int main() {
   cout << Counter::getCount() << endl;
   Counter a, b;
   cout << Counter::getCount() << endl;
   return 0;
}