#include <string.h>
#include "student.h"

//Student used as data for nodes

//Constructor, takes the name and id of the student when created
Student::Student(char* name = 0, int ID = 0){
    this->name = new char[strlen(name)]; //Creates the name on the heap, deleted in constructor
    strcpy(this->name, name);
    this->id = id;
}
Student::~Student(){
    delete name; 
}

//Getters
char* Student::getName(){
    return this->name;
}
int Student::getID(){
    return this->id;
}

//Setters
void Student::setName(char* name){
    this->name = name;
}
void Student::setID(int id){
    this->id = id;
}