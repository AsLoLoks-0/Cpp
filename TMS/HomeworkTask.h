#ifndef HOMEWORK_TASK_H
#define HOMEWORK_TASK_H
#include "Task.h"

class HomeworkTask : public Task {
private:
    std::string _subject;
public:
    HomeworkTask() : Task(){}
    HomeworkTask(std::string description, tm deadline, std::string subject) : Task(description, deadline) {}
    ~HomeworkTask() {}
    void printDetails(){};
    std::string getSubject() const { return _subject; }
    void setSubject(std::string subject);

};
#endif