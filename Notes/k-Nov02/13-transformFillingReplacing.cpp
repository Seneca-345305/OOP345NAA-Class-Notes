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
   vector<int> original{ 10, 20, 30 };
   vector<int> bonus{ 1, 2, 3 };
   vector<int> result(original.size());
   transform(original.begin(), original.end(), result.begin(),
       [](int value) { return value * 2; });
   display(result);
   transform(original.begin(), original.end(), bonus.begin(),
       result.begin(), plus<int>{});
   display(result);
   fill(result.begin(), result.end(), 5);
   display(result);
   fill_n(result.begin(), 2, 8);
   display(result);
   replace(result.begin(), result.end(), 8, 9);
   display(result);
   replace_if(result.begin(), result.end(),
       [](int value) { return value < 9; }, 0);
   display(result);
   return 0;
}