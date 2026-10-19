#include <iostream>
#include <string>
using namespace std;
int main() {
   cout << "OOP345NAA - OCT19" << endl;
   string sentence = "Learning C++";
   cout << "Length: " << sentence.size() << endl;  // Get string length

   sentence.clear();                               // Clear the string
   if (sentence.empty()) cout << "String is empty!" << endl;
   return 0;
}