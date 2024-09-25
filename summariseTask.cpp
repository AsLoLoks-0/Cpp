#include <set>
#include <iostream>
#include <time.h>
#include <random>
#include <cmath>
//https://pl.wikipedia.org/wiki/Wyszukiwanie_binarne
using namespace std;

void populateSetWithRandomValuse(set<int>* dataSet, int maxRange, int size) {
    for(int i = 0; i < size; i++){
        (*dataSet).insert(rand() % (maxRange + 1));
    }
}
void printOutSet(set<int>* dataSet){
    set<int>::iterator itr;
    for (itr = (*dataSet).begin(); itr != (*dataSet).end(); itr++) {
        cout << *itr << " ";
    }
}

void convertSetToArray(int* arrayToConvertTo[], set<int>* setToGetDataFrom){
    set<int>::iterator itr;
    int i = 0;
    for (itr = (*setToGetDataFrom).begin(); itr != (*setToGetDataFrom).end(); itr++) {
        *arrayToConvertTo[i] = *itr;
        i++;
    }
}


// int binarySearch(int* dataSet, int target){
//     int left = 0;
//     int right = *dataSet.size() - 1;
//     int searchedIndex;
//     while (left <= right)
//     {
//         searchedIndex = floor((left + right) / 2);
//         if((*dataSet).[searchedIndex])
//     }
    

// }

int main() {

    srand(time(NULL));
    set<int> dataSetSet;
    populateSetWithRandomValuse(&dataSetSet, 999, 100);
    printOutSet(&dataSetSet);
    int dataSetArray[dataSetSet.size()];
    int table[3] = {1,2,3};
    convertSetToArray(&dataSetArray, &dataSetSet);
    // set<int>::iterator itr;
    // int i = 0;
    // for (itr = dataSetSet.begin(); itr != dataSetSet.end(); itr++) {
    //     dataSetArray[i] = *itr;
    //     i++;
    // }
    cout<<*dataSetArray[1];



    
    return 0;
}
