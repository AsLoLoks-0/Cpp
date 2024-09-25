#include "Graduate.h"

Graduate::Graduate(long long int pesel, char* name, char* surename, int albumNumber, int diplomaNumber) : Student(pesel, name, surename, albumNumber){
    Graduate::diplomaNumber = diplomaNumber;
}

Graduate::Graduate() : Student(){
    Graduate::diplomaNumber = 00000;
}
int Graduate::getDiplomaNumber(){ return Graduate::diplomaNumber; }

void Graduate::setDiplomaNumber(int diplomaNumber) { Graduate::diplomaNumber = diplomaNumber; }

char* Graduate::howAreYou(){ return (char*)"Graduate"; }

Graduate::~Graduate(){
    // delete[] Person::name;
    // delete[] Person::surename;
}
