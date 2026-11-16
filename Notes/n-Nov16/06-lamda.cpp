#include <thread>
#include <iostream>
using namespace std;
int main() {
   int tx{}, ty{}, tz{};
   thread tX([&](char ch) {for (tx = 0; tx < 100; cout << ch, tx++); }, '^');
   thread tY([&](char ch) {for (ty = 0; ty < 200; cout << ch, ty++); }, '+');
   thread tZ([&](char ch) {for (tz = 0; tz < 50; cout << ch, tz++); }, '-');
   tX.join();
   tY.join();
   tZ.join();
   cout << endl;
   cout << "tX printed " << tx << " characters!" << endl;
   cout << "tY printed " << ty << " characters!" << endl;
   cout << "tZ printed " << tz << " characters!" << endl;
   return 0;
}
