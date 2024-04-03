#include "HomeworkTask.h"
#include <iostream>
using namespace std;    

void HomeworkTask::printDetails() {
    cout << "Description: " << _description << endl;
    cout << "Deadline: " << asctime(&_deadline) << endl;
    cout << "Creation date: " << asctime(_creationDate) << endl;
    cout << "ID: " << _id << endl;
    cout << "Subject: " << _subject << endl;
}

string HomeworkTask::getSubject() { return _subject; } 

void HomeworkTask::setSubject(string subject) { this->_subject = subject; }