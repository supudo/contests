// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/_template _template.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/_template

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var = from; var < to; ++var)
#define forfrom(var, from, to) for (int var = from; var > to; --var)

using namespace std;

int main() { _



#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC) << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
