// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/abc137_b abc137_b.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/abc137_b

#include <iostream>
using namespace std;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);

int main() { _
  int k, x;
  cin >> k >> x;

  for (int i = x - k + 1; i <= x; i++)
    cout << i << ' ';
  for (int i = x + 1; i < (x + k); i++)
    cout << i << ' ';

  return 0;
}
