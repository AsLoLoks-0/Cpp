#include <set>
#include <iostream>
#include <time.h>
#include <random>
#include <cmath>
//https://pl.wikipedia.org/wiki/Wyszukiwanie_binarne
using namespace std;

//*variable->method() should be a shortcut for (*variable).method() but it doesn't work (my windows and linux)

void populateSetWithRandomValues(set<int>* dataSet, int maxRange, int size) {
    srand(time(NULL));
    while ((*dataSet).size() < size)
    {
        (*dataSet).insert(rand() % (maxRange + 1));
    }
}

void printOutSet(set<int>* dataSet){
    set<int>::iterator itr;
    cout << endl;
    for (itr = (*dataSet).begin(); itr != (*dataSet).end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}

int getIteratorValueAtPosition(int position, set<int>* container) {
    set<int>::iterator itr;
    itr = (*container).begin();
    for (size_t i = 0; i < position; i++)
    {
        itr++;
    }
    return *itr;
}

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

int main() {

    set<int> dataSet;
    cout << "Load from file? y/N" << endl;
    char loadFromFile;
    cin >> loadFromFile;
    cout << endl;
    if(loadFromFile == 'y'){
        //
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
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
