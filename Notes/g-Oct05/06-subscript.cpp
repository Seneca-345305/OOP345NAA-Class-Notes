#include <iostream>
using namespace std;
int main() {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* p = &a[2];
   cout << "a[2] = " << a[2] << " or " << *(a + 2) << endl;
   cout << "a[0] = " << p[-2] << " or " << *(p - 2) << endl;
   return 0;
}