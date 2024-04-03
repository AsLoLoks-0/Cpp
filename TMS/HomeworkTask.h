#ifndef HOMEWORK_TASK_H
#define HOMEWORK_TASK_H
#include "Task.h"

class HomeworkTask : public Task {
private:
    string _subject;
public:
    HomeworkTask() : Task() {}
    HomeworkTask(string description, tm deadline, string subject) : Task(description, deadline) {}
    ~HomeworkTask() {}
    void printDetails() override;
    string getSubject() {}
    void setSubject(string subject) {}

};
#endif