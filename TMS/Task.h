#ifndef TASK_H
#define TASK_H
#include <time.h>
#include <string>

using namespace std;

class Task {
private:
    static int idProvider;
    int id;
    string description;
    tm deadline;
    struct tm * creationDate;

    int generateID(){
        return idProvider++;
    }

public:
    virtual void printDetails() = 0;
    Task(){}
    Task(string, tm){}
    ~Task(){}

    int getID(){}
    string getDescription(){}
    tm getDeadline(){}
    struct tm * getCreationDate(){}

    void setDescription(string){}
    void setDeadline(tm){}   
};

int Task::idProvider = 0;

#endif