#include <iostream>
#include "list.h"
#include "student.h"

int main(){
  LinkedList list;

  

  std::cout << list << std::endl;

  list.remove(3);
  list.remove(4);

  std::cout << list << std::endl;

  list.clear();

  std::cout << list << std::endl;

  return 0;
}
