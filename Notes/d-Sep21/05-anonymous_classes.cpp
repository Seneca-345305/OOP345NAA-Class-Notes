#include <iostream>
#include <string>
using namespace std;

class Student {
   struct {
      string first;
      string last;
   } name;
   size_t stid;
public:
   // yadaa yadaa
};


int main() {
   cout << "OOP345 NAA - Sep 21" << endl;
   struct {
      string first;
      string last;
   } name;
   name.first = "Fred";
   name.last = "Soley";

   auto another = name;

   return 0;
}