#ifndef PERSON_H
#define PERSON_H

const int maxCharacters = 25;

class Person {
private:
    long long int pesel;
    char name[maxCharacters];
    char surename[maxCharacters];

public:
    Person(long long int, char*, char*);
    Person();
    ~Person();
    long long int getPesel();
    char* getName();
    char* getSurename();
    void setPesel(long long int pesel);
    void setName(char* i);
    void setNazwisko(char* n);
    char* howAreYou();
};
#endif