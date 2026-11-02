#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void display(const vector<int>& values) {
   for (int value : values) {
      cout << value << ' ';
   }
   cout << '\n';
}
int main() {
   vector<int> first{ 30, 10, 20 };
   vector<int> second{ 15, 25 };
   sort(first.begin(), first.end());
   display(first);
   vector<int> combined(first.size() + second.size());
   merge(first.begin(), first.end(), second.begin(), second.end(), combined.begin());
   display(combined);
   sort(combined.begin(), combined.end(), greater<int>{});
   display(combined);
   return 0;
}