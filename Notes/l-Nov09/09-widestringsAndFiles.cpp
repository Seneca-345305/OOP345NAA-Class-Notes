// wide_file_demo.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main() {
   // Use the user's environment default locale (may differ per machine)
   locale loc("");

   // Write wide text
   wofstream out(L"wide.txt");
   out.imbue(loc);
   if (!out) {
      wcerr << L"Cannot open file for writing.\n";
      return 1;
   }

   out << L"Name: Fardad\n";
   out << L"Message: سلام 👋\n";  // might or might not round-trip depending on locale/OS
   out.close();

   // Read wide text
   wifstream in(L"wide.txt");
   in.imbue(loc);
   if (!in) {
      wcerr << L"Cannot open file for reading.\n";
      return 1;
   }

   wstring line;
   while (getline(in, line)) {
      wcout << L"[READ] " << line << L"\n";
   }

   in.close();
   return 0;
}