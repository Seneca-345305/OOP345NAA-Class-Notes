#include <iostream>
#include <functional>
#include <vector>

using namespace std;

int main() {
   int mark = 60;
   auto wrapped = ref(mark);
   wrapped.get() = 75;
   cout << "mark: " << mark << '\n';
   vector<reference_wrapper<int>> selected{ ref(mark) };
   mark = 80;
   cout << "Through vector: " << selected[0].get() << '\n';
   return 0;
}