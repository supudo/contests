// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/insert-a-node-at-the-tail-of-a-linked-list insert-a-node-at-the-tail-of-a-linked-list.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/insert-a-node-at-the-tail-of-a-linked-list < insert-a-node-at-the-tail-of-a-linked-list.in

#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
 public:
  int data;
  SinglyLinkedListNode* next;

  SinglyLinkedListNode(int node_data) {
    this->data = node_data;
    this->next = nullptr;
  }
};

class SinglyLinkedList {
 public:
  SinglyLinkedListNode* head;
  SinglyLinkedList() { this->head = nullptr; }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
  while (node) {
    cout << node->data;
    node = node->next;
    if (node)
      cout << sep;
  }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
  while (node) {
    SinglyLinkedListNode* temp = node;
    node = node->next;
    free(temp);
  }
}

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
  SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
  node->next = nullptr;

  if (head == nullptr)
    head = node;
  else {
    SinglyLinkedListNode* last = head;
    while (last->next != nullptr)
      last = last->next;
    last->next = node;
  }
  return head;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  SinglyLinkedList* llist = new SinglyLinkedList();

  int llist_count;
  cin >> llist_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < llist_count; i++) {
    int llist_item;
    cin >> llist_item;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
    llist->head = llist_head;
  }

  print_singly_linked_list(llist->head, "\n");

  free_singly_linked_list(llist->head);

  fout.close();

  return 0;
}
