// custom_extract.cpp - Example of setting failbit in overloaded >>
#include <iostream>
#include <fstream>
#include <iomanip>

struct Student {
   int id;
   double gpa;
};

std::istream& operator>>(std::istream& is, Student& s) {
   if (!(is >> s.id >> s.gpa)) {  // Base read fails
      is.setstate(std::ios::failbit);  // Set failbit
      return is;
   }
   if (s.gpa < 0.0 || s.gpa > 4.0) {  // Custom validation fails
      is.setstate(std::ios::failbit);  // Logical error: Invalid GPA
      s.gpa = 0.0;  // Reset invalid value
   }
   return is;
}

int main() {
   std::fstream file("students.txt");
   file << "123 3.5\n456 -1.2\n";  // Invalid GPA in second line
   file.seekg(0);

   Student stu;
   while (file >> stu) {
      std::cout << "ID: " << stu.id << ", GPA: " << stu.gpa << std::endl;
   }
   if (file.fail()) {
      std::cout << "Extraction failed (e.g., invalid data) - failbit set." << std::endl;
   }
   file.close();
   return 0;
}