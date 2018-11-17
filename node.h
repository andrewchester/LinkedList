#ifndef NODE_H
#define NODE_H

#include "student.h"

class Node {
 private:
  Student* s;
  Node* next; //Next node in list, 0 if it's the end of list
  Node* previous; //Previous node in list, 0 if it's the beginning of list

 public:
  Node(Student*, Node* previous, Node* next);
  ~Node();
  
  //Getters
  Node* getNext();
  Node* getPrevious();
  Student* getStudent();

  //Setters
  void setNext(Node* node);
  void setPrevious(Node* node);
  void setStudent(Student*);
};

#endif