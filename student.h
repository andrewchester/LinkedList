#ifndef STUDENT_H
#define STUDENT_H

//Class for the student, used as data for nodes
class Student {
    private:
        char* name;
        int id;
    public:
        Student(char*, int);
        ~Student();

        //Getters
        char* getName();
        int getID();

        //Setters
        void setName(char*);
        void setID(int);
};

#endif