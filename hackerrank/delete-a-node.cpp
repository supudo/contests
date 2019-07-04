// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/delete-a-node delete-a-node.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/delete-a-node

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

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
  SinglyLinkedListNode* n = head;
  if (position == 0) {
    n = head->next;
    free(head);
    return n;
  }
  for (int i=0; i<position-1; i++) {
    n = n->next;
  }
  SinglyLinkedListNode* n2 = n->next->next;
  free(n->next);
  n->next = n2;
  return head;
}

int main() { _
  int n;
  cin >> n;

  SinglyLinkedList* llist = new SinglyLinkedList();
  for (int i=0; i<n; i++) {
    int q;
    cin >> q;
    llist->insert_node(q);
  }

  int position;
  cin >> position;

  SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);
  print_singly_linked_list(llist1, " ");
  cout << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
