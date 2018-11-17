#include "node.h"

//Constructor for node, takes a student as its data, and a next and previous node it points to
Node::Node(Student* s, Node* previous = 0, Node* next = 0){
  this->previous = previous;
  this->next = next;
  this->s = s;
}

Node::~Node(){ //Destructor, deletes the student
  delete s;
}

Node* Node::getNext(){ //Returns a pointer to the next node in the list
  return this->next;
}
Node* Node::getPrevious(){ //Returns a pointer to the previous node in the list
  return this->previous;
}

void Node::setNext(Node* node){ //Sets the next node in the list
  this->next = node;
}
void Node::setPrevious(Node* node){ //Sets the previous node in the list
  this->previous = node;
}

Student* Node::getStudent(){ //Returns a pointer to its student
  return this->s;
}
void Node::setStudent(Student* s){ //Sets its student
  this->s = s;
}

