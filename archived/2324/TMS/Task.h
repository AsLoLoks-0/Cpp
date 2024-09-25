#ifndef TASK_H
#define TASK_H
#include <time.h>
#include <string>
#include <iostream>



class Task {
protected:
    static int _idProvider;
    int _id;
    std::string _description;
    tm _deadline;
    struct tm * _creationDate;

    int generateID(){
        return _idProvider++;
    }

public:
    virtual void printDetails(){ std::cout<<"Virtual function" << std::endl;}
    Task(){}
    Task(std::string description, tm deadline){}
    ~Task(){}

    int getId() const {return _id;}
    std::string getDescription() const {return _description;}
    tm getDeadline() const {return _deadline;}
    struct tm * getCreationDate() const {return _creationDate;}

    void setDescription(std::string description);
    void setDeadline(tm deadline);
};

int Task::_idProvider = 0;

#endif