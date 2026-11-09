// error_handling.cpp
#include <iostream>
#include <fstream>

int main() {
   std::ifstream err("nonexistent.txt");
   if (err.fail()) {
      std::cout << "File not found - failbit set." << std::endl;
      err.clear();  // Reset for reuse
   }

   std::ofstream good("test.txt");
   good << "Success";
   if (good.good()) {
      std::cout << "Write OK - goodbit." << std::endl;
   }
   good.close();
   return 0;
}