/*
One Definition Rule(ODR)
A variable, function, class, or template must have exactly one definition across the entire program.
Multiple identical declarations are fine, but only one definition.

If you break this rule, you get linker errors about multiple definitions.

 Scope
   Scope = where a name is visible.
   Types of scope :
      Block scope(inside{ })
      Class scope
      Namespace scope
      Global scope
      Block Scope

Variables exist only inside their block.
*/
// selection_scope.cpp
#include <iostream>
using namespace std;

int main() {
   int i;
   cout << "Enter i: ";
   cin >> i;
// C++17 initializer: in if and switch extends scope to the whole construct.
   if (int j = i % 10; j < 5) {
      i -= j;   // round down
   }
   else {
      i += 10 - j; // round up
   }
   cout << i << endl;

   cout << "Enter i: ";
   cin >> i;
   switch (int j = i % 10; j / 5) {
   case 0: i -= j; break;     // round down
   case 1: i += 10 - j; break; // round up
   }
   cout << i << endl;
}