#ifndef TASK_H
#define TASK_H
#include <time.h>
#include <string>

using namespace std;

class Task {
protected:
    static int _idProvider;
    int _id;
    string _description;
    tm _deadline;
    struct tm * _creationDate;

    int generateID(){
        return _idProvider++;
    }

public:
    virtual void printDetails() = 0;
    Task(){}
    Task(string description, tm deadline){}
    ~Task(){}

    int getId(){}
    string getDescription(){}
    tm getDeadline(){}
    struct tm * getCreationDate(){}

    void setDescription(string description){}
    void setDeadline(tm deadline){}   
};

int Task::_idProvider = 0;

#endif