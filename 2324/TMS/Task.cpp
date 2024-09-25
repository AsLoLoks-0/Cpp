#include "Task.h"

using namespace std;

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

void Task::setDescription(string description){
    _description = description;
}
void Task::setDeadline(tm deadline){
    _deadline = deadline;
}