#include "ProjectTask.h"
#include <iostream>
#include <vector>
using namespace std;

ProjectTask::ProjectTask() : Task() {
  _project = "";
  _members = {};
}
ProjectTask::ProjectTask(string description, tm deadline, string project, vector<string> members) : Task(description, deadline) {
  _project = project;
  _members = members;
}
ProjectTask::~ProjectTask() {}

void ProjectTask::printDetails() {
  cout << "Description: " << _description << endl;
  cout << "Deadline: " << asctime(&_deadline) << endl;
  cout << "Creation date: " << asctime(_creationDate) << endl;
  cout << "ID: " << _id << endl;
  cout << "Project: " << _project << endl;
  cout << "Members: " << endl;
  for (string member : _members) {
    cout << member << endl;
  }
}
string ProjectTask::getProject() { return _project; }
vector<string> ProjectTask::getMembers() { return _members; }

void ProjectTask::setProject(string project) { _project = project; }
void ProjectTask::setMembers(vector<string> members) { _members = members; }