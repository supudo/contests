// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/for-loop for-loop.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/for-loop < for-loop.in

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string vals[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int x, y;
    cin >> x;
    cin >> y;
    for (int i=x; i<=y; i++) {
      if (i >= 1 && i <= 9)
        cout << vals[i] << endl;
      else if (i % 2 == 0)
        cout << "even" << endl;
      else
        cout << "odd" << endl;
    }
    return 0;
}
