#include <iostream>
using namespace std;
struct Rec {
   double a;
   int b;
};
struct Rec1 {
   char c1;
   double a;
   char c2;
};
struct Rec2 {
   double a;
   double b;
};
struct alignas(16) Rec3 {
   double a;
   double b;
};

int main() {
   cout << "OOP345 NAA - Sep 18th" << endl;
   cout << "sizeof double: " << sizeof(double) << endl;
   cout << "sizeof int: " << sizeof(int) << endl;
   cout << "sizeof Rec: " << sizeof(Rec) << endl;
   cout << "sizeof Rec1: " << sizeof(Rec1) << endl;
   cout << "sizeof Rec2: " << sizeof(Rec2) << endl;
   cout << "sizeof Rec3: " << sizeof(Rec3) << endl;
   
   cout << "alignof Rec: " << alignof(Rec) << endl;
   cout << "alignof Rec1: " << alignof(Rec1) << endl;
   cout << "alignof Rec2: " << alignof(Rec2) << endl;
   cout << "alignof Rec2: " << alignof(Rec3) << endl;
   return 0;
}