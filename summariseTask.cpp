#include <set>
#include <iostream>
#include <time.h>
#include <random>
#include <cmath>
//https://pl.wikipedia.org/wiki/Wyszukiwanie_binarne
using namespace std;

//*variable->method() should be a shortcut for (*variable).method() but it doesn't work (my windows and linux)

void populateSetWithRandomValues(set<int>* dataSet, int maxRange, int size) {
    for(int i = 0; i < size; i++){
        (*dataSet).insert(rand() % (maxRange + 1));
        //*dataSet->insert(rand() % (maxRange + 1)); // no match for 'operator*' (operand type is 'std::pair<std::_Rb_tree_const_iterator<int>, bool>')
    }
}
void printOutSet(set<int>* dataSet){
    set<int>::iterator itr;
    for (itr = (*dataSet).begin(); itr != (*dataSet).end(); itr++) {
        cout << *itr << " ";
    }
}

void advanceIteratorBy(set<int>::iterator itr, int amount) {
    if(amount > 0){
        for(int i = 0; i < amount; i++){
            itr++;
        }
        return;
    }
    for(int i = 0; i < amount; i++){
        itr--;
    }
}
void advanceIteratorBy(set<int>::iterator itr, int amount, auto container) {
    if(amount > 0){
        for(int i = 0; i < amount; i++){
            itr++;
            if(itr == container.end())
                cout << "Iterator went out of bounds, end crossed" << endl;
        }
        return;
    }
    for(int i = 0; i < amount; i++){
        itr--;
        if(itr == container.begin())
            cout << "Iterator went out of bounds, begin crossed" << endl;
    }
}
void setIteratorTo(set<int>::iterator itr, int position) {
    
}
void setIteratorTo(set<int>::iterator itr, int position, bool closerToIteratorEnd) {
    
}
// int binarySearch(set<int>* dataSet, int target){
//     int left = 0;
//     int right = dataSet->size() - 1;
//     int searchedIndex;
//     while (left <= right)
//     {
//         searchedIndex = floor((left + right) / 2);
//         // if((*dataSet).[searchedIndex])
//     }
    

// }

int main() {

    srand(time(NULL));
    set<int> dataSetSet;
    populateSetWithRandomValues(&dataSetSet, 999, 100);
    printOutSet(&dataSetSet);

    
    return 0;
}
