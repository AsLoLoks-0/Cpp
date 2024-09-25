#include <iostream>
#include <time.h>
#include "Task.h"
#include "ProjectTask.h"
#include "HomeworkTask.h"
#include "TaskManager.h"

using namespace std;

int main()
{
    cout<<"Hello World!"<<endl;

    time_t now = time(0);
    struct tm * today = localtime(&now);

    struct tm * tomorrow = new struct tm(*today);
    tomorrow->tm_mday += 1;
    mktime(tomorrow);

    struct tm * nextWeek = new struct tm(*today);
    nextWeek->tm_mday += 7;
    mktime(nextWeek);


    // HomeworkTask task_0 = HomeworkTask();
    ProjectTask task_1 = ProjectTask("Przygotowanie prezentacji z przedmiotu programowania", *today, "Programowanie", {"Jan", "Krzysztof", "Piotr"});
    cout<<"task_1";
    // HomeworkTask task_2 = HomeworkTask("Przygotowanie prezentacji", *tomorrow, "Przygotowanie prezentacji");
    // HomeworkTask task_3 = HomeworkTask("Przygotowanie zadania z programowania", *nextWeek, "Przygotowanie zadania z programowania");
    
    // std::string subject = task_1.getSubject();
    // task_1.setSubject("New subject");

    std::string description = task_1.getDescription();
    task_1.setDescription("New description");

    struct tm deadline = task_1.getDeadline();
    task_1.setDeadline(*nextWeek);

    // ProjectTask task_4 = ProjectTask("Przygotowanie prezentacji z przedmiotu programowania", *today, "Programowanie", {"Jan", "Krzysztof", "Piotr"});
    // ProjectTask task_5 = ProjectTask("Przygotowanie prezentacji z przedmiotu matematyki", *tomorrow, "Matematyka", {"Anna", "Piotr", "Krzysztof"});
    // ProjectTask task_6 = ProjectTask("Przygotowanie prezentacji z przedmiotu fizyki", *nextWeek, "Fizyka", {"Jan", "Anna", "Piotr"});
 
    // TaskManager manager = TaskManager();

    // cout << endl;
    // task_1.printDetails();
    // cout << endl;
    // task_2.printDetails();
    // cout << endl;
    // task_3.printDetails();
    // cout << endl;
    // task_4.printDetails();
    // cout << endl;
    // task_5.printDetails();
    // cout << endl;
    // task_6.printDetails();
    // cout << endl;
    return 0;
}