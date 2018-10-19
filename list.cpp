#include "list.h"

LinkedList::LinkedList(){
  this->size = 0;
  this->first = 0;
  this->last = 0;
}

void LinkedList::add(Student* student){
  if(size == 0){
    this->first = new Node();
    first->setStudent(student);
    this->last = first;
    size++;
    return;
  }
  Node* node = new Node();
  last->setNext(node);
  size++;
}
void LinkedList::insert(int index, int value){
  Node* insertedNode = new Node();
  insertedNode->setStudent(student);
  Node* indexNode = this->first;
  for(int i = 0; i < index; i++){
    indexNode = indexNode->getNext();
  }
  indexNode->getPrevious()->setNext(insertedNode);
  indexNode->setPrevious(insertedNode);

  insertedNode->setPrevious(indexNode->getPrevious());
  insertedNode->setNext(indexNode);

  this->size++;
}

void LinkedList::remove(int index){
  Node* indexNode = this->first;
  for(int i = 0; i < index; i++){
    indexNode = indexNode->getNext();
  }

  indexNode->getPrevious()->setNext(indexNode->getNext());
  indexNode->getNext()->setPrevious(indexNode->getPrevious());
  
  delete indexNode;
  this->size--;
}

void LinkedList::clear(){
  while(this->first != this->last){
    this->last = this->last->getPrevious();
    delete this->last->getNext();
    this->last->setNext(0);
    size--;
  }
  delete last;
  this->last = 0, this->first = 0, this->size = 0;
}
