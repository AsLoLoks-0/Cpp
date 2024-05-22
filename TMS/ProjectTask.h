#ifndef PROJECT_TASK_H
#define PROJECT_TASK_H
#include "Task.h"
#include <vector>

using namespace std;

class ProjectTask : public Task {
private:
  std::string _project;
  std::vector<std::string> _members;

public:
  ProjectTask() : Task() {}
  ProjectTask(std::string description, tm deadline, std::string project,
              std::vector<std::string> members)
      : Task(description, deadline){};
  ~ProjectTask(){};
  void printDetails(){
    cout << "Description: " << _description << endl;
  cout << "Deadline: " << asctime(&_deadline) << endl;
  cout << "Creation date: " << asctime(_creationDate) << endl;
  cout << "ID: " << _id << endl;
  cout << "Project: " << _project << endl;
  cout << "Members: " << endl;
  for (string member : _members) {
    cout << member << endl;
  }
  };
  std::string getProject() const { return _project; }
  std::vector<std::string> getMembers() const { return _members; }
  void setProject(std::string project);
  void setMembers(std::vector<std::string> members);
};
#endif