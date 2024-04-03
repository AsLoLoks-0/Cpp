#ifndef PROJECT_TASK_H
#define PROJECT_TASK_H
#include "Task.h"
#include <vector>

class ProjectTask : public Task {
private:
  string _project;
  vector<string> _members;

public:
  ProjectTask() : Task() {}
  ProjectTask(string description, tm deadline, string project,
              vector<string> members)
      : Task(description, deadline){};
  ~ProjectTask(){};
  void printDetails() override;
  string getProject();
  vector<string> getMembers();
  void setProject(string project);
  void setMembers(vector<string> members);
};
#endif