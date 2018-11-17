#ifndef NODE_H
#define NODE_H

class Node {
 private:
  int value;
  Node* next;
  Node* previous;

 public:
  Node(Node* previous, Node* next);
  ~Node();
  
  Node* getNext();
  Node* getPrevious();

  void setNext(Node* node);
  void setPrevious(Node* node);

  void setValue(int value);
  int getValue();
};

#endif