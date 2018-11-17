#include "node.h"

Node::Node(Student* s, Node* previous = 0, Node* next = 0){
  this->previous = previous;
  this->next = next;
  this->s = s;
}

Node::~Node(){
  delete s;
}

Node* Node::getNext(){
  return this->next;
}
Node* Node::getPrevious(){
  return this->previous;
}

void Node::setNext(Node* node){
  this->next = node;
}
void Node::setPrevious(Node* node){
  this->previous = node;
}

Student* Node::getStudent(){
  return this->s;
}
void Node::setStudent(Student* s){
  this->s = s;
}

