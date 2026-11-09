// binary_seek.cpp
#include <iostream>
#include <fstream>

int main() {
   // Write binary
   std::ofstream bout("data.bin", std::ios::binary);
   int scores[] = { 90, 85, 92 };
   bout.write(reinterpret_cast<char*>(scores), sizeof(scores));
   bout.close();

   // Read and seek
   std::ifstream bin("data.bin", std::ios::binary);
   int read_score;
   bin.seekg(sizeof(int));  // Skip first score
   bin.read(reinterpret_cast<char*>(&read_score), sizeof(int));
   std::cout << "Second score: " << read_score << std::endl;
   bin.close();
   return 0;
}