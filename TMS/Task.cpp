#include "Task.h"



Task::Task(){
    id = generateID();
    time_t time;
    creationDate = localtime(&time);
    description = "";
    deadline = *creationDate;
}
Task::Task(string desc, tm date){
    id = generateID();
    time_t time;
    creationDate = localtime(&time);
    description = desc;
    deadline = date;
}
Task::~Task(){}

int Task::getID(){
    return id;
}
string Task::getDescription() {
    return description;
}
tm Task::getDeadline(){
    return deadline;
}
struct tm * Task::getCreationDate(){
    return creationDate;
}

void Task::setDescription(string desc){
    description = desc;
}
void Task::setDeadline(tm date){
    deadline = date;
}