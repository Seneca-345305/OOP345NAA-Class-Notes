#include <iostream>
#include <filesystem>
#include <iomanip>  // For fixed precision
namespace fs = std::filesystem;

int main() {
   fs::path p = "nonexistent.txt";  // Change to an existing file for testing

   if (fs::exists(p)) {
      std::cout << p << " exists!" << std::endl;

      if (fs::is_directory(p)) {
         std::cout << "It's a directory." << std::endl;
      }
      else {
         std::cout << "It's a file." << std::endl;
      }

      if (fs::is_regular_file(p)) {
         auto size = fs::file_size(p);
         std::cout << "Size: " << std::fixed << std::setprecision(2)
            << static_cast<double>(size) / 1024 << " KB" << std::endl;
      }
   }
   else {
      std::cout << p << " does not exist." << std::endl;
   }

   return 0;
}