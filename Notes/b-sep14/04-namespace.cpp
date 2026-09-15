// dot.h
namespace dot {
   const int ML = 5;
   const char* leader(char*);
   void foo();
}

// dot.cpp
#include "dot.h"
namespace dot {
   const char* leader(char* s) {
      for (int i = 0; i < ML; i++) s[i] = '.';
      s[ML] = '\0';
      return s;
   }
   void foo() {
      //fooing!
   }
}

// main.cpp
#include <iostream>
#include "dot.h"
//using namespace std;
using dot::foo;

int main() {
   char s[10];
   std::cout << dot::leader(s) << std::endl;
}
