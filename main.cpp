#include <iostream>
#include <string.h>
#include "list.h"
#include "student.h"

//A file for testing the LinkedList class

//Generates some sample students in the list
void genStudents(LinkedList* list){
  char intstr[2] = "";
  char finalstring[8] = "name";

  for(int i = 0; i < 10; i++){ //Loop 10 times

    //Concatenate i to finalstring to produce name0, name1, etc
    sprintf(intstr, "%d", i); 
    strcat(finalstring, intstr);
    
    Student* s = new Student(finalstring, i); //Create a student
    list->append(s); //Append the student

    //Reset the strings
    strcpy(finalstring, "name");
    strcpy(intstr, "");
  }
}

int main(){
  LinkedList list;

  genStudents(&list); //Generating students

  std::cout << "List: " << std::endl << list << std::endl; //<< is overloaded in list.cpp, so you can print out the list like this

  std::cout << "Removing elements 3 and 4..." << std::endl;
  list.remove(3); //Remove elements from the list
  list.remove(4);

  std::cout << "List: " << std::endl << list << std::endl;

  std::cout << "Inserting two students..." << std::endl;

  Student* s = new Student(const_cast<char*>("newstudent"), 100);
  list.insert(0, s); //Insert students into the list

  Student* s1 = new Student(const_cast<char*>("newstudent2"), 101);
  list.insert(2, s1);

  std::cout << "List: " << std::endl << list << std::endl;

  std::cout << "Deleting two students..." << std::endl;
  
  list.deleteStudent(s); //Delete students from the list
  list.deleteStudent(const_cast<char*>("newstudent2"));

  std::cout << "List: " << std::endl << list << std::endl;

  std::cout << "Clearing the list..." << std::endl;
  list.clear(); //Clear the list

  std::cout << "List: " << std::endl << list << std::endl;

  return 0;
}
