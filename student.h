#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        char* name;
        int id;
    public:
        Student(char*, int);
        ~Student();

        char* getName();
        int getID();

        void setName(char*);
        void setID(int);
};

#endif