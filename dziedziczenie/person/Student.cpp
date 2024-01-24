#include "Student.h"

Student::Student(long long int pesel, char* name, char* surename, int albumNumber) : Person(pesel, name, surename){
    Student::albumNumber = albumNumber;
}

Student::Student() : Person(){
    Student::albumNumber = 00000;
}

int Student::getAlbumNumber(){ return Student::albumNumber; }

void Student::setAlbumNumber(int albumNumber) { Student::albumNumber = albumNumber; }

char* Student::howAreYou(){ return (char*)"Student"; }

Student::~Student(){
    // delete[] Person::name;
    // delete[] Person::surename;
}
