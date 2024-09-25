#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
private:
    int albumNumber;
public:
    Student(long long int, char* , char*, int): Person(){};
    Student(): Person(){};
    ~Student();
    int getAlbumNumber();
    void setAlbumNumber(int);
    char* howAreYou();
};
#endif