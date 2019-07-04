// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/pointer pointer.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/pointer < pointer.in

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
  printf("%d\n", (*a + *b));
  printf("%d\n", abs(*a - *b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}


