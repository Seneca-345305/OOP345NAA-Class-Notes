#pragma once
#include <iostream>
class BEmployee {
   double salary;
   int empno;
   char name[52];
public:
   BEmployee(double sal = 0.0, int emp = 0, const char* nm = "");
   bool operator<(const BEmployee&)const;
   std::ostream& print(std::ostream& os)const;
   std::istream& read(std::istream& ifs);
};
std::ostream& operator<<(std::ostream& os, const BEmployee& E);
std::istream& operator>>(std::istream& ifs, BEmployee& E);