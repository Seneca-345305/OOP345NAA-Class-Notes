#include <iostream>
#include <fstream>
#include <string>

int main() {
   std::ifstream fin("grades.txt");  // Input mode
   if (!fin) {
      std::cout << "File open failed!" << std::endl;
      return 1;
   }

   std::string line;
   while (std::getline(fin, line)) {
      std::cout << "Line: " << line << std::endl;
   }
   fin.close();
   return 0;
}