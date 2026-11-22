#include <iostream>
using namespace std;

struct arrayqueue {
  int* list;
  int front;
  int back;
  int size;
  arrayqueue(int size) {
    list = new int[size];
    front = -1;
    back = -1;
    this->size = size;
  }
  int deQueue() {
    int val = front;
    if (back == -1) {
      cout << "back: " << back << endl;
      cout << "front: " << front << endl;
      cout << "quee is empty\n";
      return -1;

    } else if (back == front) {
      back = -1;
      front = -1;
    } else {
      front = (front + 1) % size;
    }
    return list[val];
  }
  void inQueue(int data) {
    if (back == -1) {
      back++;
      front++;

    } else if ((back + 1) % size == front) {
      cout << "queue is full\n";
      return;

    } else {
      back = (back + 1) % size;
    }
    cout << "back index:" << back << endl;
    cout << "back value :" << data << endl;
    list[back] = data;
  }
};
