#include "Task.h"

Task::Task(){
    _id = generateID();
    time_t time;
    _creationDate = localtime(&time);
    _description = "";
    _deadline = *_creationDate;
}
Task::Task(string description, tm deadline){
    _id = generateID();
    time_t time;
    _creationDate = localtime(&time);
    _description = description;
    _deadline = deadline;
}
Task::~Task(){}

int Task::getId(){
    return _id;
}
string Task::getDescription() {
    return _description;
}
tm Task::getDeadline(){
    return _deadline;
}
struct tm * Task::getCreationDate(){
    return _creationDate;
}

void Task::setDescription(string description){
    _description = description;
}
void Task::setDeadline(tm deadline){
    _deadline = deadline;
}