// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/z_template z_template.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/z_template

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " secnds!" << endl;
  cout.flush();
#endif

  return 0;
}
