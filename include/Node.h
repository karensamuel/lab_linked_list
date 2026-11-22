struct Node {
 public:
  int data;
  Node* prev;
  Node* next;
  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};
