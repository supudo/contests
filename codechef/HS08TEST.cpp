// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/HS08TEST HS08TEST.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/HS08TEST

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
  unsigned int amount;
  float balance;
  cin >> amount >> balance;

  if (fmod(amount, 5) == 0 && (balance - amount) >= 0.5)
    printf("%.2f", (balance - amount - 0.5));
  else
    printf("%.2f", balance);

  return 0;
}
