#ifndef LIST_H
#define LIST_H

#include "node.h"

class LinkedList {
 private:
  Node* first;
  Node* last;
  int length;
 public:
  LinkedList();

  Node* operator[] (int);
  Node* at(int index);

  void append(int value);
  void insert(int index, int value);
  void remove(int index);
  void clear();
  int size();

  Node* end();
  Node* begin();
};

#endif