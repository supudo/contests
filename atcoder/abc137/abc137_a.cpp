// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/abc137_a abc137_a.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/abc137_a

#include <iostream>
using namespace std;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);

int main() { _
  int m1, m2;
  cin >> m1 >> m2;
  cout << max(m1 + m2, max(m1 - m2, m1 * m2));
  return 0;
}
