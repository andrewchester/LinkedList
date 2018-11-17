#include "student.h"

Student::Student(char* name = 0, int ID = 0){
    this->name = name;
    this->id = id;
}
Student::~Student(){
    delete name;
}

char* Student::getName(){
    return this->name;
}
int Student::getID(){
    return this->id;
}

void Student::setName(char* name){
    this->name = name;
}
void Student::setID(int id){
    this->id = id;
}