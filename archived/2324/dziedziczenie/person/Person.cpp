#include "Person.h"

Person::Person(){
    Person::pesel = 00000000000;
    char* name = (char*)"NotFiled";
    char* surename = (char*)"NotFiled";
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::name[i] = name[i];
    }
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::surename[i] = surename[i];
    }

}

Person::Person(long long int pesel, char* name, char* surename){
    Person::pesel = pesel;
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::name[i] = name[i];
    }
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::surename[i] = surename[i];
    }
}

Person::~Person(){
    // delete[] Person::name;
    // delete[] Person::surename;
}

long long int Person::getPesel(){ return Person::pesel; }

char* Person::getName(){ return Person::name; }

char* Person::getSurename(){ return Person::surename; }

void Person::setPesel(long long int pesel) { Person::pesel = pesel; }

void Person::setName(char* name) {
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::name[i] = name[i];
    }
}

void Person::setNazwisko(char* surename) {
    for (int i = 0; i < maxCharacters - 1; i++) {
        Person::surename[i] = surename[i];
    }
}

char* Person::howAreYou(){ return (char*)"Person"; }
