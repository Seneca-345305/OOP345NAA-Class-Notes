#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

bool atLeast(int value, int minimum) {
   return value >= minimum;
}
int main() {
   auto passing = bind(atLeast, placeholders::_1, 50);
   cout << boolalpha;
   cout << "passing(40): " << passing(40) << '\n';
   cout << "passing(65): " << passing(65) << '\n';
   vector<int> marks{ 40, 65, 80 };
   cout << "Passes: "
      << count_if(marks.begin(), marks.end(), passing) << '\n';
   return 0;
}