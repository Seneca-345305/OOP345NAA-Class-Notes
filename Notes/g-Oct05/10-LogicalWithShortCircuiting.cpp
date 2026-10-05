#include <iostream>
using namespace std;
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   int i = 0;
   if (i != 0 && (i+=10))  // second part not evaluated
      cout << "Won't crash" << endl;
   else
      cout << "Safe!" << endl;
   cout << i << endl;
   int a[50]{};
   // say the array has values
   int cnt{};
   for (int i = 0; i < 50; i++) {
      (a[i] == 10) && (cnt+=1);
   }

   return 0;
}