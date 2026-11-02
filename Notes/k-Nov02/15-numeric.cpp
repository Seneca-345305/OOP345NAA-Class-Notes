#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

using namespace std;

int main() {
   vector<double> prices{ 2.5, 4.0, 1.5 };
   vector<int> quantities{ 2, 3, 4 };
   cout << "Price sum: "
      << accumulate(prices.begin(), prices.end(), 0.0) << '\n';
   cout << "Bill: "
      << inner_product(prices.begin(), prices.end(), quantities.begin(), 0.0) << '\n';
   vector<int> running(quantities.size());
   partial_sum(quantities.begin(), quantities.end(), running.begin());
   for (int value : running) { cout << value << ' '; }
   cout << '\n';
   cout << "Product: " << accumulate(quantities.begin(), quantities.end(),
       1, multiplies<int>{}) << '\n';
   partial_sum(quantities.begin(), quantities.end(), running.begin(), multiplies<int>{});
   for (int value : running) { cout << value << ' '; }
   cout << '\n';
   int target[]{ 1, 1, 1 };
   cout << "Total squared difference: "
      << inner_product(quantities.begin(), quantities.end(), target, 0,
          plus<int>{}, [](int a, int b) { return (a - b) * (a - b); }) << '\n';
   return 0;
}
