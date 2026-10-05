
#include <iostream>
#include <string>
using namespace std;
//class Paper { // const_cast
//   string m_text{};
//   size_t m_prnCount{};
//public:
//   Paper(string text):m_text(text) {
//   }
//   void print()const {
//      size_t* cnt = const_cast<size_t*>(&m_prnCount);
//      (*cnt)++;
//      cout << "Copy number " << m_prnCount << endl;
//      cout << m_text << endl;
//   }
//
//};
class Paper {
   string m_text{};
   mutable size_t m_prnCount{};
public:
   Paper(string text) :m_text(text) {}
   void print()const {
      m_prnCount++;
      cout << "Copy number " << m_prnCount << endl;
      cout << m_text << endl;
   }

};


int main() {
   return 0;
}