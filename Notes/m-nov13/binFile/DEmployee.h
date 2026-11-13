#pragma once
#include <iostream>
#include <fstream>
class DEmployee {
   double salary{};
   int empno{};
   char* name{};
public:
   static void strcpy(char* des, const char* src);
   static size_t strlen(const char* s);
   DEmployee(double sal = 0.0, int emp = 0, const char* nm = "");
   DEmployee(const DEmployee&);
   DEmployee(DEmployee&&)noexcept;
   DEmployee& operator=(const DEmployee&);
   DEmployee& operator=(DEmployee&&)noexcept;
   ~DEmployee();
   bool operator<(const DEmployee& rOper) const;
   std::ostream& print(std::ostream& os)const;
   bool write(std::ofstream& ofs, std::ofstream& nfs)const;
   bool read(std::ifstream& ifs, std::ifstream& nfs);
};
std::ostream& operator<<(std::ostream& os, const DEmployee& E);
