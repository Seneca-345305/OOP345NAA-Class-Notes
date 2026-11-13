#include <iostream>
#include <fstream>
#include <vector>
#include "DEmployee.h"
using namespace std;
// row must get fixed
bool showRec(int row, ifstream& ofs, ifstream& nfs) {
   DEmployee E;
   bool res{};
   ofs.clear();
   nfs.clear();
   ofs.seekg(row * (sizeof(E) + sizeof(std::streampos) + sizeof(size_t)));
   if(E.read(ofs, nfs)){
      cout << row << ": " << E << endl;
      res = true;
   }
   else {
      cout << "End of file was reached!" << endl;
   }
   return res;
}
int main() {
   DEmployee E;
   int i = 0;
   ifstream ofs("d_employee.bin", ios::binary);
   ifstream nfs("d_name.bin", ios::binary);
   while (E.read(ofs, nfs)) {
      cout << (++i) << ": " << E << endl;
   }
   cout << "===============================" << endl;
   showRec(10, ofs, nfs);
   showRec(100, ofs, nfs);
   return 0;
}