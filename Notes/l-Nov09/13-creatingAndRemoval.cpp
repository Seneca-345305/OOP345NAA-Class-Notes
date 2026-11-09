#include <iostream>
#include <filesystem>
#include <fstream>  // For writing content
#include <string>
namespace fs = std::filesystem;

int main() {
   fs::path source = "source.txt";
   fs::path dest = "demo_dir/copied.txt";

   // Create source file with content
   {
      std::ofstream out(source);
      out << "Hello, Filesystem!\nThis is OOP345 demo.";
      std::cout << "Created " << source << std::endl;
   }

   // Copy to dest
   std::error_code ec;
   fs::copy_file(source, dest, fs::copy_options::overwrite_existing, ec);
   if (ec) {
      std::cout << "Copy error: " << ec.message() << std::endl;
   }
   else {
      std::cout << "Copied to " << dest << std::endl;
   }

   // Read and print dest to verify
   std::ifstream in(dest);
   std::string line;
   while (std::getline(in, line)) {
      std::cout << "Dest content: " << line << std::endl;
   }

   // Remove source
   fs::remove(source, ec);
   std::cout << "Removed " << source << std::endl;

   return 0;
}