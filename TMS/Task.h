#ifndef TASK_H
#define TASK_H
#include <time.h>
#include <string>

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
    Task(){
        id = generateID();
        time_t time;
        creationDate = localtime(&time);
        description = "";
        deadline = *creationDate;
    }
    Task(string desc, tm date){
        id = generateID();
        time_t time;
        creationDate = localtime(&time);
        description = desc;
        deadline = date;
    }
    ~Task(){}

    int getID(){
        return id;
    }
    string getDescription(){
        return description;
    }
    tm getDeadline(){
        return deadline;
    }
    struct tm * getCreationDate(){
        return creationDate;
    }

    void setDescription(string desc){
        description = desc;
    }
    void setDeadline(tm date){
        deadline = date;
    }   
};

int Task::idProvider = 0;

#endif