#include <iostream>

#include "list.h"
#include "node.h"

LinkedList::LinkedList(){
  this->length = 0;
  this->first = 0;
  this->last = 0;
}

/// Accessing Values ///
Node* LinkedList::at(int index){
  if(index > length){
    std::cout << "Out of bounds error during at()" << std::endl;
    exit(0);
  }

  if(index < 0 || index == length)
    return 0;

  Node* current = this->first;
  for(int i = 0; i < index; i++)
    current = current->getNext();
  return current;
}

Node* LinkedList::operator[](int index){
  return at(index);
}

/// Adding/Removing values ///
void LinkedList::insert(int index, int value){
  std::cout << "Appending at " << index << " size of list = " << length << std::endl; 
  Node* f = at(index - 1);
  Node* s = at(index);

  std::cout << "f = " << f << " s = " << s << std::endl;

  Node* newNode = new Node(f, s);
  newNode->setValue(value);
  
  if(f != 0)
    f->setNext(newNode);
  else
    this->first = newNode;

  std::cout << "first: " << this->first->getValue();

  if(s != 0)
    s->setPrevious(newNode);
  else
    this->last = newNode;

  std::cout << " last: " << this->last->getValue() << std::endl;

  length++;
}

void LinkedList::append(int value){
  this->insert(length, value);
}

/// Other ///
int LinkedList::size(){
  return this->length;
}