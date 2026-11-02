#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   vector<int> marks{ 60, 80, 60, 90 };
   cout << "All: " << count(marks.begin(), marks.end(), 60) << '\n';
   cout << "First two: "
      << count(marks.begin(), marks.begin() + 2, 60) << '\n';
   int values[]{ 60, 80, 60, 90 };
   cout << "Array: " << count(values, values + 4, 60) << '\n';
   return 0;
}