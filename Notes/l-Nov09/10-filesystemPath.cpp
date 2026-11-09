#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main() {
   // Create paths
   fs::path current = fs::current_path();  // Current working directory
   fs::path file = "example.txt";          // Relative path
   fs::path full = "/home/user/docs/report.pdf";  // Absolute (Unix-style; adapts on Windows)

   // Output them
   std::cout << "Current dir: " << current << std::endl;
   std::cout << "Relative file: " << file << std::endl;
   std::cout << "Full path: " << full << std::endl;

   // Append to path
   fs::path combined = current / "subdir" / "data.bin";  // '/' operator joins
   std::cout << "Combined: " << combined << std::endl;

   return 0;
}