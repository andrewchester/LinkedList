#include "node.h"

class LinkedList {
 private:
  Node* first;
  Node* last;
  int value;
  int size;
 public:
  LinkedList();

  void add(int value);
  void insert(int index, int value);
  void remove(int index);
  void clear();
}
