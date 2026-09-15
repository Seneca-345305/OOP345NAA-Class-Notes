#include <iostream>
using namespace std;
int main(int argc, char* argv[], char* env[]) {
   for (int i = 0; i < argc; i++) {
      cout << (i + 1) << ": ";
      cout << argv[i] << endl;
   }
   cout << "*********************************************" << endl;
   for (int i = 0; env[i]; i++) {
      cout << (i + 1) << ": ";
      cout << env[i] << endl;
   }
   return 0;
}