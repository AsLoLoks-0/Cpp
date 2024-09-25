#include <set>
#include <iostream>
#include <fstream>
#include <time.h>
#include <random>
#include <cmath>
using namespace std;

//https://pl.wikipedia.org/wiki/Wyszukiwanie_binarne
//*variable->method() should be a shortcut for (*variable).method() but it doesn't work (my windows and linux)
// better version later here: https://github.com/AsLoLoks-0/Cpp

/*
opis działania funkcji: zapełniania zbioru liczbami losowymi z podanego maksymalnego akresu
nazwa funkcji: populateSetWithRandomValues
argumenty funkcji: set<int>* dataSet, int maxRange, int size
wartość zwracana przez funkcję: brak
autor funkcji: Adam
*/
void populateSetWithRandomValues(set<int>* dataSet, int maxRange, int size) {
    srand(time(NULL));
    while ((*dataSet).size() < size)
    {
        (*dataSet).insert(rand() % (maxRange + 1));
    }
}

/*
opis działania funkcji: zapełniania zbioru liczbami podanymi z pliku
nazwa funkcji: populateSetWithValuesFromFile
argumenty funkcji: set<int>* dataSet, string fileName
wartość zwracana przez funkcję: brak
autor funkcji: Adam
*/
void populateSetWithValuesFromFile(set<int>* dataSet, string fileName) {
    ifstream usersFile(fileName);
    string line;
    if (usersFile.is_open()){
        while ( getline(usersFile,line) )
        {
            (*dataSet).insert(stoi(line));
        }
        usersFile.close();
    }
    else 
        cout << "Unable to open file"; 
}

/*
opis działania funkcji: wypisuje podany zbiór
nazwa funkcji: printOutSet
argumenty funkcji: set<int>* dataSet
wartość zwracana przez funkcję: brak
autor funkcji: Adam
*/
void printOutSet(set<int>* dataSet){
    set<int>::iterator itr;
    cout << endl;
    for (itr = (*dataSet).begin(); itr != (*dataSet).end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}

/*
opis działania funkcji: zwraca wartość o pod podanym indeksie dla tego zbioru
nazwa funkcji: getIteratorValueAtPosition
argumenty funkcji: int position, set<int>* dataSet
wartość zwracana przez funkcję: wartość o podanym indeksie
autor funkcji: Adam
*/
int getIteratorValueAtPosition(int position, set<int>* dataSet) {
    set<int>::iterator itr;
    itr = (*dataSet).begin();
    for (size_t i = 0; i < position; i++)
    {
        itr++;
    }
    return *itr;
}

/*
opis działania funkcji: przeszukiwa zbiór binarnie i zwraca indeks pod którego znajduje sie poszukiwana wartość lub -1 w przypadku nie znalezienia
nazwa funkcji: binarySearch
argumenty funkcji: set<int>* dataSet, int target
wartość zwracana przez funkcję: indeks podanej wartosci lub -1 w przypadku nie znalezienia
autor funkcji: Adam
*/
int binarySearch(set<int>* dataSet, int target){
    int left = 0;
    int right = (*dataSet).size() - 1;
    int searchedIndex;
    while (left <= right)
    {
        searchedIndex = floor((left + right) / 2);
        if(getIteratorValueAtPosition(searchedIndex, dataSet) < target){
            left = searchedIndex + 1;
        } else if(getIteratorValueAtPosition(searchedIndex, dataSet) > target){
            right = searchedIndex - 1;
        } else {
            return searchedIndex;
        }
    }
    return -1;
}

/*
opis działania funkcji: wypisuje mediane dla podanego zbioru
nazwa funkcji: getMedianOfASet
argumenty funkcji:set<int>* dataSet
wartość zwracana przez funkcję: madnia zbioru
autor funkcji: Adam
*/
int getMedianOfASet(set<int>* dataSet) {
    if((*dataSet).size() % 2 == 1)
        return getIteratorValueAtPosition(floor((*dataSet).size() / 2) + 1, dataSet);
    return (getIteratorValueAtPosition(floor((*dataSet).size() / 2), dataSet) + getIteratorValueAtPosition(floor((*dataSet).size() / 2) + 1, dataSet)) / 2;
}

int main() {

    set<int> dataSet;
    cout << "Load from file? y/N" << endl;
    char loadFromFile;
    cin >> loadFromFile;
    cout << endl;
    if(loadFromFile == 'y'){
        string usersFileName;
        cout << "Enter file name (with file type '.txt): ";
        cin >> usersFileName;
        populateSetWithValuesFromFile(&dataSet, usersFileName);
    }
    else
        populateSetWithRandomValues(&dataSet, 999, 100);

    printOutSet(&dataSet);

    int targetValue;
    cout << "Enter target value: ";
    cin >> targetValue;
    cout << endl;
    if(binarySearch(&dataSet, targetValue) != -1){
    cout << "Element found" << endl;
    cout << "Value: " << getIteratorValueAtPosition(binarySearch(&dataSet, targetValue), &dataSet) <<  " Index: " << binarySearch(&dataSet, targetValue) << endl;
    }
    else 
        cout << "Element not found" << endl;
    

    return 0;
}
