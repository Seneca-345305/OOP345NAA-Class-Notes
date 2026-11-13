#include <iostream>
#include <fstream>
#include <iomanip>
#include "DEmployee.h"
using namespace std;
void DEmployee::strcpy(char* des, const char* src) {
   while (src && des && *src) *des++ = *src++;
   if(des)*des = 0;
}
size_t DEmployee::strlen(const char* s) {
   size_t i = 0;
   while (s && s[i])i++;
   return i;
}
DEmployee::DEmployee(double sal, int emp, const char* nm) {
   salary = sal;
   empno = emp;
   name = new char[strlen(nm) + 1];
   strcpy(name, nm);
}
DEmployee::DEmployee(const DEmployee& E) {
   operator=(E);
}
DEmployee::DEmployee(DEmployee&& E)noexcept {
   operator=(move(E));
}
DEmployee& DEmployee::operator=(const DEmployee& E) {
   if (this != &E) {
      delete[] name;
      name = new char[strlen(E.name) + 1];
      strcpy(name, E.name);
      salary = E.salary;
      empno = E.empno;
   }
   return *this;
}
DEmployee& DEmployee::operator=(DEmployee&& E)noexcept  {
   if (this != &E) {
      delete[] name;
      name = E.name;
      E.name = nullptr;
      salary = E.salary;
      empno = E.empno;
   }
   return *this;
}
DEmployee::~DEmployee() {
   delete[] name;
}
bool DEmployee::operator<(const DEmployee& rOper) const {
   size_t i = 0;
   while (name && rOper.name && name[i] && rOper.name[i] && name[i] == rOper.name[i]) i++;
   return name && rOper.name && name[i] < rOper.name[i];
}
ostream& DEmployee::print(ostream& os)const {
   return os << name << "," << empno << "," << fixed << setprecision(2) << salary;
}
bool DEmployee::write(std::ofstream& ofs, ofstream& nfs) const {
   // nfs.seekp(0, ios::end);// I think this should be her
   std::streampos nameLoc = nfs.tellp();
   size_t nameLen = strlen(name);
   nfs.write(name, nameLen); 
   // DEmployee in file = *this (shallow assignment)
   ofs.write((const char*)this, sizeof(*this));
   ofs.write((const char*)&nameLoc, sizeof(nameLoc));
   ofs.write((const char*)&nameLen, sizeof(nameLen));
   return ofs && nfs;
}
bool DEmployee::read(ifstream& ifs, ifstream& nfs) {
   std::streampos  nameLoc{};
   size_t nameLen{};
   delete[] name;
   // *this = DEmployee in file (shallow assignment)
   ifs.read((char*)this, sizeof(*this));
   ifs.read((char*)&nameLoc, sizeof(nameLoc));
   ifs.read((char*)&nameLen, sizeof(nameLen));
   if (ifs) {
      name = new char[nameLen + 1];
      nfs.seekg(nameLoc);
      nfs.read(name, nameLen);
      name[nameLen] = 0;
   }
   else {
      name = nullptr;
   }
   return ifs && nfs;
}
ostream& operator<<(ostream& os, const DEmployee& E) {
   return E.print(os);
}
