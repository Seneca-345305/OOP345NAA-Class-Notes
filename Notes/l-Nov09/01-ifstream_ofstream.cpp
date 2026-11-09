/*ios_base
* basic_ios
* istream ostream      <iostream>
* ifstream ofstream    <fstream>
* fstream
*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream writer;
   writer.open("grades.txt");
   writer << "Math: 95\nEnglish: 88\n";
   writer.close();  // Flushes buffer

   // Read from file
   ifstream reader("grades.txt");
   if (reader) {
      string subject;
      int score;
      while (reader >> subject >> score) {
         cout << "Subject: " << subject << ", Score: " << score << endl;
      }
      reader.close();
   }
   else {
      cerr << "Could not open the file!" << endl;
   }
   return 0;
}