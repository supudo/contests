// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/b b.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/b

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  int x, y;
  cin >> x >> y;

  int x2 = x;
  int y2 = y;
  int z = 0;
  if (x2 == y2)
    z = x2;
  while (x2 != y2) {
    if (x2 < y2) {
      x2 += x;
      z = y2;
    }
    else if (x2 > y2) {
      y2 += y;
      z = x2;
    }
    else
      z = x2;
#ifdef LOCALHOST
    cout << "round : x2 = " << x2 << " y2 = " << y2 << " ; z = " << z << endl;
#endif
  }
  cout << z << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
