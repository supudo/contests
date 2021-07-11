// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/merge_two_sorted_lists merge_two_sorted_lists.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/merge_two_sorted_lists

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeLists(ListNode* a, ListNode* b) {
  if (a == nullptr)
    return b;
  if (b == nullptr)
    return a;

  auto ln = new ListNode();
  if (a->val < b->val) {
    ln->val = a->val;
    ln->next = mergeLists(a->next, b);
  }
  else {
    ln->val = b->val;
    ln->next = mergeLists(a, b->next);
  }
  return ln;
}

int main() { _

  //auto ln1 = new ListNode(1, new ListNode(2, new ListNode(4, nullptr)));
  //auto ln2 = new ListNode(1, new ListNode(3, new ListNode(4, nullptr)));
  auto ln1 = new ListNode(2, new ListNode(5, new ListNode(7, new ListNode(8, nullptr))));
  auto ln2 = new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(9, new ListNode(12, nullptr)))));

  auto ln0 = mergeLists(ln1, ln2);

  cout << "Linked list 1 is:" << '\n';
  while (ln1 != nullptr) { cout << ln1->val << ", "; ln1 = ln1->next;  }
  cout << '\n' << "Linked list 2 is:" << '\n';
  while (ln2 != nullptr) { cout << ln2->val << ", "; ln2 = ln2->next;  }
  cout << '\n';

  cout << "Result is:" << '\n';
  while (ln0 != nullptr) { cout << ln0->val << ", "; ln0 = ln0->next;  }
  cout << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
