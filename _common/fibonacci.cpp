// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/fibonacci fibonacci.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/fibonacci

#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

// int sumfib(int first, int second, int idx) {
//   if (i == 0)
//     cout << "0" << endl;
//   else if (i == 1)
//     cout << "1" << endl;
//   else
//     cout << ((i - 1) + (i - 2)) << endl;
// }

int main() { _
  int f;
#ifdef LOCALHOST
  cout << "TO: ";
#endif
  cin >> f;
  cout << endl;

int first = 0, second = 1, next;
for (int i = 0; i < f; i++) {
  if (i <= 1)
    next = i;
  else {
    next = first + second;
    first = second;
    second = next;
  }
  cout << next << endl;
}

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
