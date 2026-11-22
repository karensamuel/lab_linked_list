#include "linkedList.h"
struct linkedQueue {
  linkedList list;
  linkedQueue() { list = linkedList(); }
  void deQueue() { list.deleteAt(0); }
  void inQueue(int data) { list.insertNode(data); }
  void showQueue() { list.display(); }
};
