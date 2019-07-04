// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/print-in-reverse print-in-reverse.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/print-in-reverse

#include <bits/stdc++.h>

using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<lli> vlli;
typedef vector<string> vs;

class SinglyLinkedListNode {
  public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data) {
      this->data = node_data;
      this->next = nullptr;
    }
};

class SinglyLinkedList {
  public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList() {
      this->head = nullptr;
      this->tail = nullptr;
    }

  void insert_node(int node_data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
    if (!this->head)
      this->head = node;
    else
      this->tail->next = node;
    this->tail = node;
  }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
  while (node) {
    cout << node->data;
    node = node->next;
    if (node)
      cout << sep;
  }
}

void reversePrint(SinglyLinkedListNode* head) {
  SinglyLinkedListNode *current = head;
  SinglyLinkedListNode *prev = nullptr, *next = nullptr;
  while (current != nullptr) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  SinglyLinkedListNode* n = head;
  while (n != nullptr) {
    cout << n->data << endl;
    n = n->next;
  }
  cout << endl;
}

int main() { _
  int tests;
  cin >> tests;

  for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
      int llist_item;
      cin >> llist_item;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      llist->insert_node(llist_item);
    }
    reversePrint(llist->head);
  }

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
