// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/gen_random_hex_color gen_random_hex_color.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/gen_random_hex_color

#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;
char hex_symbols[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

string getHex(int h) {
  string c = "";
  while (h > 0) {
    h = h % 16;
    c = hex_symbols[h] + c;
    h = h/16;
  }
  return c;
}

int main() { _
  srand (time(NULL));
  auto r = rand() % 256;
  auto g = rand() % 256;
  auto b = rand() % 256;
  cout << "rgb(" << to_string(r) << "," << to_string(g) << "," << to_string(b) << ")" << endl;

  string color = "#";
  color += getHex(r) + "-";
  color += getHex(g) + "-";
  color += getHex(b);
  cout << color << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
