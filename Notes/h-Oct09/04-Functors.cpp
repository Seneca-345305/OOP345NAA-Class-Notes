#include <iostream>
using namespace std;
class Add {
   size_t m_opCnt{};
public:
   int operator()(int a, int b) {
      m_opCnt++;
      return a + b;
   }
   operator size_t()const {
      return m_opCnt;
   }
};


int main() {
   Add add;
   int sum;
   for (int i = 0; i < 5; i++) {
      sum = add(10+i, 20+i);
      cout << sum << " ";
   }
   cout << endl << "called " << size_t(add) << " times!" << endl;
   return 0;
}