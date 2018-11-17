#ifndef NODE_H
#define NODE_H

#include "student.h"

class Node {
 private:
  Student* s;
  Node* next;
  Node* previous;

 public:
  Node(Student*, Node* previous, Node* next);
  ~Node();
  
  Node* getNext();
  Node* getPrevious();

  void setNext(Node* node);
  void setPrevious(Node* node);

  void setStudent(Student*);
  Student* getStudent();
};

#endif