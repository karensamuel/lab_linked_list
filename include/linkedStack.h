#include "linkedList.h"
struct linkedStack {
  linkedList list;
  int top;
  linkedStack() {
    top = -1;
    list = linkedList();
  }
  int pop() {
    if (top < 0) {
      cout << "empty stack \n";
      return -1;
    }
    int val;

    val = list.deleteAt(top);
    top--;
    return val;
  }
  void push(int data) {
    list.insertNode(data);
    top++;
    cout << " top:" << top << endl;
  }
  void showStack() { list.display(); }
};
