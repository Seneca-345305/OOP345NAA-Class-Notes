#include <iostream>
#include <fstream>
#include <iomanip>
#include "BEmployee.h"
using namespace std;
BEmployee::BEmployee(double sal, int emp, const char* nm) {
   size_t i{};
   salary = sal;
   empno = emp;
   for (i = 0u; nm[i] && i < 51u; name[i] = nm[i++]);
   name[i] = char(0);
}
bool BEmployee::operator<(const BEmployee& rOper) const {
   size_t i = 0;
   while (name[i] && rOper.name[i] && name[i] == rOper.name[i]) i++;
   return name[i] < rOper.name[i];
   //return salary < rOper.salary;
}
ostream& BEmployee::print(ostream& os)const {
   return os << name << "," << empno << "," << fixed << setprecision(2) << salary;
}
istream& BEmployee::read(istream& ifs) {
   ifs.read(reinterpret_cast<char*>(this), sizeof(BEmployee));
   return ifs;
}
ostream& operator<<(ostream& os, const BEmployee& E) {
   return E.print(os);
}
istream& operator>>(istream& ifs, BEmployee& E) {
   return E.read(ifs);
}