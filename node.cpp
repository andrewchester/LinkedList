

#include "node.h"

Node::Node(Node* previous = 0, Node* next = 0){
  this->previous = previous;
  this->next = next;
  this->value = 0;
}

Node::~Node(){
  delete next, previous;
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

int Node::getValue(){
  return this->value;
}
void Node::setValue(int value){
  this->value = value;
}

