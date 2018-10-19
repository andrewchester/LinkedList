
Node::Node(){
  this->previous = 0;
  this->next = 0;
  this->student = 0;
}

Node::Node(Node* next = 0, Node* previous = 0){
  this->previous = previous;
  this->next = 0;
  this->student = 0;
}

Node::~Node(){
  delete this->next, this->previous, this->student;
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

void Node::setStudent(Student* student){
  this->student = student;
}
