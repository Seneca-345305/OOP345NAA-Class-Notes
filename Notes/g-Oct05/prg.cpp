#include <iostream>
using namespace std;
void hanoi(int n, char from, char to, char aux) {
   if (n == 1) {
      cout << from << "->" << to << endl;
   }
   else {
      hanoi(n - 1, from, aux, to);
      cout << from << "->" << to << endl;
      hanoi(n - 1, aux, to, from);
   }
}
int main() {
   cout << "OOP345 NAA - OCT - 05" << endl;
   hanoi(4, 'A', 'C', 'B');
   return 0;
}