#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(const vector<int>& values) {
   for (int value : values) {
      cout << value << ' ';
   }
   cout << '\n';
}
int main() {
   vector<int> marks{ 40, 65, 80, 35 };
   vector<int> copied(marks.size());
   copy(marks.begin(), marks.end(), copied.begin());
   display(copied);
   vector<int> passed(marks.size());
   auto writtenEnd = copy_if(marks.begin(), marks.end(), passed.begin(),
       [](int mark) { return mark >= 50; });
   cout << "Before erase: ";
   display(passed);
   passed.erase(writtenEnd, passed.end());
   cout << "After erase: ";
   display(passed);
   cout << "Size: " << passed.size() << '\n';
   return 0;
}