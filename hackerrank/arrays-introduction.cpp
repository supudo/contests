// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/arrays-introduction arrays-introduction.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/arrays-introduction < arrays-introduction.in

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> nums;
    int x;
    while (cin) {
      cin >> x;
      nums.push_back(x);
    }
    for (int i=(n - 1); i>=0; i--)
      cout << nums[i] << " ";
    return 0;
}


