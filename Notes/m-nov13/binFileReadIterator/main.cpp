#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BEmployee.h"
using namespace std;
int main() {
   int i = 1;
   ifstream file("employee.bin", ios::binary);
   istream_iterator<BEmployee> ii{ file };
   istream_iterator<BEmployee> eos{};
   vector<BEmployee> emp{ ii,eos };
   for (auto& e : emp) {
      cout << i++ << ": " << e << endl;
   }
   sort(emp.begin(), emp.end());
   cout << "---------------------------------" << endl;
   i = 1;
   for (auto& e : emp) {
      cout << i++ << ": " << e << endl;
   }
   return 0;
}
