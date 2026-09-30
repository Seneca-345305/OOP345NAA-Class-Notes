// class_static.cpp
#include <iostream>
using namespace std;
static int fileScope = 20; // is forced to be File scoped and can not be "extern"ed
void count() {
   static int i = 0;
   cout << i++ << endl;
}
class Counter {
   static int count;// shared value between the instances fot he class
   int something{ 20 };
public:
   Counter() { ++count; }
   ~Counter() { --count; }
   static int getCount() { 
      //something++; // error, can not access non-static memebers
      return count; 
   }
};

int Counter::count = 0; // a static attribute (member_variable) must be created and initialized outside of the class
                        // because it belongs to all and non can initialize it. 
int main() {
   cout << Counter::getCount() << endl;
   Counter a, b;
   cout << Counter::getCount() << endl;
   for (int i = 0; i < 20; i++) {
      count();
   }
   return 0;
}