#include <iostream>
#include <filesystem>
#include <iomanip>
namespace fs = std::filesystem;

int main() {
   fs::path dir = "demo_dir";  // Create in current working dir

   // Create directory (idempotent: safe if exists)
   std::error_code ec;
   if (fs::create_directory(dir, ec)) {
      std::cout << "Created " << dir << std::endl;
   }
   else if (ec) {
      std::cout << "Error: " << ec.message() << std::endl;
   }
   else {
      std::cout << dir << " already exists." << std::endl;
   }

   // Iterate contents
   std::cout << "Contents of current dir:" << std::endl;
   for (const auto& entry : fs::directory_iterator(fs::current_path())) {
      std::cout << "  " << entry.path().filename() << " ("
         << (fs::is_directory(entry) ? "dir" : "file") << ")" << std::endl;
   }

   // Clean up (optional)
   // fs::remove_all(dir);  // Uncomment to delete

   return 0;
}