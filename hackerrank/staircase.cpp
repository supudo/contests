// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/staircase staircase.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/staircase
#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
  for (int i = n; i >= 0; i--) {
    if (i < n) {
      for (int j=0; j < i; j++) {
        cout << ' ';
      }
    }
    for (int j=(n - i); j > 0; j--) {
      cout << '#';
    }
    if (i < n)
      cout << '\n';
  }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
