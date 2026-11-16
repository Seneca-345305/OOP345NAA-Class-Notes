#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

const int CNT = 2'000'000;

void work(atomic<int>& counter, int& cntr) {
   for (int i = 0; i < CNT; i++) {
      counter++;     // atomic increment (safe)
      cntr++;
   }
}

int main() {
   atomic<int> counter{ 0 };
   int cntr{ 0 };
   thread a(work, ref(counter), ref(cntr));
   thread b(work, ref(counter), ref(cntr));
   thread c(work, ref(counter), ref(cntr));

   a.join();
   b.join();
   c.join();

   cout << "\nExpected: " << CNT * 3 << endl;
   cout << "Actual variable : " << cntr << endl;
   cout << "Actual atomic: " << counter.load() << endl;
}
