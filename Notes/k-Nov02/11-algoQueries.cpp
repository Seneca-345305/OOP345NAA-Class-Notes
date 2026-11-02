#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   vector<int> marks{ 45, 70, 70, 90 };
   auto passing = [](int mark) { return mark >= 50; };
   cout << boolalpha;
   cout << "70s: " << count(marks.begin(), marks.end(), 70) << '\n';
   cout << "Passes: " << count_if(marks.begin(), marks.end(), passing) << '\n';
   cout << "All pass: " << all_of(marks.begin(), marks.end(), passing) << '\n';
   cout << "Any pass: " << any_of(marks.begin(), marks.end(), passing) << '\n';
   cout << "None pass: " << none_of(marks.begin(), marks.end(), passing) << '\n';
   auto found = find(marks.begin(), marks.end(), 100);
   if (found == marks.end()) {
      cout << "100 was not found\n";
   }
   auto firstPass = find_if(marks.begin(), marks.end(), passing);
   if (firstPass != marks.end()) {
      cout << "First pass: " << *firstPass << '\n';
   }
   auto firstFail = find_if_not(marks.begin(), marks.end(), passing);
   if (firstFail != marks.end()) {
      cout << "First fail: " << *firstFail << '\n';
   }
   for_each(marks.begin(), marks.end(), [](int mark) {
      cout << mark << ' ';
   });
   cout << '\n';
   return 0;
}