class Node {
 private:
  int value;
  Node* next;
  Node* previous;

 public:
  Node(Node* next, Node* previous);
  Node();
  ~Node();
  
  Node* getNext();
  Node* getPrevious();

  void setNext(Node* node);
  void setPrevious(Node* node);
};
