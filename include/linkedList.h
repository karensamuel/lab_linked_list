#include <iostream>

#include "Node.h"
using namespace std;

struct linkedList {
  Node* head;
  Node* tail;
  linkedList() { head = tail = nullptr; }
  Node* findNode(int data) {
    Node* current = head;
    while (current != nullptr) {
      if (current->data == data) {
        return current;
      }
      current = current->next;
    }
    return nullptr;
  }
  Node* GetIndex(int index) {
    if (index >= GetCount() || index < 0) {
      cout << "not a valid index\n";
      return nullptr;
    }
    if (index == 0) {
      return head;
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    return current;
  }
  void insertNode(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
      head = newNode;
      tail = newNode;

    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }
  void display() {
    Node* current = head;
    while (current != nullptr) {
      cout << current->data << endl;
      current = current->next;
    }
  }
  int deleteAt(int index) {
    int val;
    if (index >= GetCount() || index < 0) {
      cout << "not a valid index\n";
      return -1;

    } else {
      cout << "inside delete at\n";
      Node* remNode = GetIndex(index);
      cout << "data:" << remNode->data << endl;

      if (remNode == head) {
        cout << "inside head  index\n";
        if (head == tail) {
          head = nullptr;
          tail = nullptr;
        } else {
          head = remNode->next;
          head->prev = nullptr;
        }

      } else if (remNode == tail) {
        tail = remNode->prev;
        tail->next = nullptr;
      } else {
        remNode->prev->next = remNode->next;
        remNode->next->prev = remNode->prev;
      }

      val = remNode->data;
      delete remNode;
      return val;
    }
  }

  // Day1 - LinkedList:
  //======================
  // 1. indsert node after given node
  void InsertAfter(int data, int afterData) {
    Node* afterNode = findNode(afterData);
    Node* newNode = new Node(data);
    if (afterNode == nullptr) {
      cout << "coudlnt find it ";
      return;
    }
    if (afterNode == tail) {
      afterNode->next = newNode;
      newNode->prev = afterNode;
      tail = newNode;
      return;
    }
    Node* nextNode = afterNode->next;
    nextNode->prev = newNode;
    newNode->next = nextNode;
    afterNode->next = newNode;
    newNode->prev = afterNode;
  }
  // 2. indsert node before given node
  void InsertBefore(int data, int beforeData) {
    Node* beforeNode = findNode(beforeData);
    Node* newNode = new Node(data);
    if (beforeNode == nullptr) {
      cout << "coudlnt find it ";
      return;
    }
    if (beforeNode == head) {
      beforeNode->prev = newNode;
      newNode->next = beforeNode;
      head = newNode;
      return;
    }
    Node* prevNode = beforeNode->prev;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    beforeNode->prev = newNode;
    newNode->next = beforeNode;
  }
  // 3. get number of nodes
  int GetCount() {
    if (head == nullptr) {
      return 0;
    }
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
      current = current->next;
      count++;
    }
    return count;
  }
  // 4. get data in the given
  int GetDataByIndex(int index) {
    if (index >= GetCount() || index < 0) {
      cout << "not a valid index\n";
      return -1;
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    return current->data;
  }
};
