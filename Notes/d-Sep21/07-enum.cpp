#include <iostream>
#include <string>
using namespace std;

//typedef int week;
//const int sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7;

enum class week { sun = 1, mon, tue, wed, thu, fri, sat };

int main() {
   cout << "OOP345 NAA - Sep 21" << endl;
   week w = week::mon;
   return 0;
}