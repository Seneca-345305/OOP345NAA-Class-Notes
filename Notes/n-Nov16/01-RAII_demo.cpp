// RAII - Resource Acqusition Is Intialization
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class FileGuard {
   FILE* file;

public:
   explicit FileGuard(const char* filename) : file(fopen(filename, "w")) {
      if (file == nullptr) {
         throw runtime_error(string("Could not open ") + filename);
      }
   }

   FileGuard(const FileGuard&) = delete;
   FileGuard& operator=(const FileGuard&) = delete;

   void writeMessage() {
      if (fputs("Hello, RAII!\n", file) == EOF) {
         throw runtime_error("Could not write to the file");
      }
   }

   ~FileGuard() {
      fclose(file);
      puts("File closed");
   }
};

int main() {
   try {
      FileGuard guard("demo.txt");
      cout << "File opened\n";
      guard.writeMessage();

      cout << "Throwing a demo error\n";
      throw runtime_error("Simulated error");
      guard.writeMessage();
   }
   catch (const runtime_error& error) {
      cout << "Caught: " << error.what() << '\n';
   }

   return 0;
}
