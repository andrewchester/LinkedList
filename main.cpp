#include <iostream>
#include "list.h"

int main(){
  LinkedList list;

  list.insert(0, 1);
  std::cout << "Inserted 1" << std::endl << std::endl;
  list.insert(0, 5);
  std::cout << "Inserted 5" << std::endl << std::endl;
  list.insert(0, 3);
  std::cout << "Inserted 3" << std::endl << std::endl;
  list.insert(0, 10);
  std::cout << "Inserted 10" << std::endl << std::endl;

  std::cout << "List:";
  for(int i = 0; i < list.size(); i++)
    std::cout << " " << list[i]->getValue();
  std::cout << std::endl;
  
  return 0;
}
