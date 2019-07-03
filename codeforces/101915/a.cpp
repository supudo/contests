// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/a a.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/a

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

const int max_price = 10 ^ 6;
vector< int > findTwoSmallest(int arr[], int arr_size) {
  int n1 = INT_MAX, n2 = INT_MAX;
  for (int i=0; i<arr_size; i++) {
    if (arr[i] < n1) {
      n2 = n1;
      n1 = arr[i];
    }
    else if (arr[i] < n2 && arr[i] != n1)
      n2 = arr[i];
  }
  return vector<int>{n1, n2};
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  int t;
  cin >> t;
  int n, k;
  cin >> n >> k;
  cin.ignore();

  int final_price = 0;

  vector< vector< int > > cases;
  while (n > 0) {
    int c = 0;
    int current = 0;
    int prices[3];
    while (c < 3) {
      cin >> current;
      prices[c] = current;
      c += 1;
    }

    vector< int > smallest2 = findTwoSmallest(prices, 3);
    cout << smallest2[0] << " - " << smallest2[1] << endl;

    n -= 1;
  }

  cout << final_price << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
