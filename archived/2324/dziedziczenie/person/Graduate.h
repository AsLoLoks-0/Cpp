#ifndef GRADUATE_H
#define GRADUATE_H
#include "Student.h"

class Graduate : public Student {
private:
    int diplomaNumber;
public:
    Graduate(long long int, char*, char*, int, int) : Student(){};
    Graduate() : Student(){};
    ~Graduate();
    int getDiplomaNumber();
    void setDiplomaNumber(int);
    char* howAreYou();
};
#endif