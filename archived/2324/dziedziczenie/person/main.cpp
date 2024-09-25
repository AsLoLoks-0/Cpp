#include <iostream>
#include "Person.cpp"
#include "Student.cpp"
#include "Graduate.cpp"

using namespace std;

int main() {
    Person person(12345678901, (char*)"szczupak", (char*)"szczupak");
    Student student(12345678901, (char*)"Janusz", (char*)"Gosiior", 52312);
    Graduate graduate(12345678901, (char*)"jan", (char*)"kowalski", 24321, 7483);
     
    cout << person.howAreYou() <<" " << person.getName() << " " << person.getSurename() << endl;
    
    cout << student.howAreYou() <<" "<< student.getName() << " " << student.getSurename() << " Numer albumu: " << student.getAlbumNumber() << endl;
    
    cout << graduate.howAreYou() <<" " << graduate.getName() << " " << graduate.getSurename() << " Numer albumu: " << graduate.getAlbumNumber() << " Numer dyplomu: " << graduate.getDiplomaNumber() << endl;

    return 0;
}