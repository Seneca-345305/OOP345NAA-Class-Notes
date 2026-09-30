#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maximum(T a, T b) {
   return a > b ? a : b;
}

template<> // maximum specialization for const char*
const char* maximum<const char*>(const char* a, const char* b) { // is used with typename needs to be const char*
   return strcmp(a, b) > 0 ? a : b;
}


int main() {
   cout << maximum(2.3, 4.5) << endl;       // generic version
   cout << maximum<double>(100, 23.45) << endl; // forcing use of template for double
   cout << maximum<int>(100, 23.45) << endl; // forcing use of template for int
   cout << maximum(100, 200) << endl; // maximum<int>(100, 100) will be used automatically
   cout << maximum("abc", "def") << endl;
   return 0;
}
