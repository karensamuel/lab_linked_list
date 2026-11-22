#include <iostream>
using namespace std;
//#include "linkedList.h"
//#include "linkedStack.h"
/* main of first task
int main() {
  linkedList l = linkedList();

  l.insertNode(1);
  l.insertNode(2);
  l.insertNode(3);
  l.insertNode(4);
  l.insertNode(5);
  cout << "list count: " << l.GetCount();
  Node* n = l.findNode(3);
  cout << "list node: " << n->data << endl;
  cout << "=======getdatabyindex=====\n";
  cout << "index(-1):" << l.GetDataByIndex(-1) << endl;
  cout << "index(0):" << l.GetDataByIndex(0) << endl;
  cout << "index(1):" << l.GetDataByIndex(1) << endl;
  cout << "index(2):" << l.GetDataByIndex(2) << endl;
  cout << "index(3):" << l.GetDataByIndex(3) << endl;
  cout << "index(4):" << l.GetDataByIndex(4) << endl;
  cout << "index(5):" << l.GetDataByIndex(5) << endl;
  cout << "=======insert after=====\n";
  l.InsertAfter(6, 1);
  l.InsertAfter(7, 3);
  l.InsertAfter(8, 5);
  l.InsertAfter(7, 3);
  l.InsertAfter(9, 7);
  l.display();
  cout << "=======insert before=====\n";
  linkedList y = linkedList();

  y.insertNode(1);
  y.insertNode(2);
  y.insertNode(3);
  y.insertNode(4);
  y.insertNode(5);
  y.InsertBefore(6, 1);
  y.InsertBefore(7, 3);
  y.InsertBefore(8, 5);
  y.InsertBefore(7, 3);
  y.InsertBefore(9, 7);
  y.display();
  cout << "=======get count of y :=====\n";
  cout << y.GetCount() << endl;
  cout << "=======delete of y :=====\n";
  y.deleteAt(0);
  y.deleteAt(8);
  y.deleteAt(10);
  y.deleteAt(5);
  y.display();
  return 0;
}*/
/*int main() {
  linkedStack st = linkedStack();
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.showStack();
  cout << "pop the stack:\n";
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;

  return 0;
}*/
/*#include "linkedQueue.h"
int main() {
  linkedQueue l = linkedQueue();
  l.inQueue(1);
  l.inQueue(2);
  l.inQueue(3);
  l.inQueue(4);
  l.inQueue(5);
  l.showQueue();
  l.deQueue();
  cout << "after first deque\n";
  l.showQueue();
  l.deQueue();
  l.showQueue();
  l.deQueue();
  l.showQueue();
  l.deQueue();
  l.showQueue();
  l.deQueue();
  l.showQueue();
  l.deQueue();
}*/
/*#include "arrayqueue.h"
int main() {
  arrayqueue l = arrayqueue(5);

  cout << " ====test 1=====\n";
  l.inQueue(1);
  l.inQueue(2);
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;
  cout << " ====test 2=====\n";
  l.inQueue(1);
  l.inQueue(2);
  l.inQueue(3);
  l.inQueue(4);
  l.inQueue(5);
  l.inQueue(6);
  cout << " ====test 3=====\n";
  l.deQueue();
  l.inQueue(6);
  l.inQueue(7);
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;
  cout << l.deQueue() << endl;

  l.deQueue();
}*/