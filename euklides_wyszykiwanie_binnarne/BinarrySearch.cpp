#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int sortedTable[], int tableSize, int targetValue){
    int left = 0, right = tableSize - 1, middle = 0; 

    while(left <= right){
        middle = floor((left + right) / 2);
        if(sortedTable[middle] < targetValue)
            left = middle + 1;
        else
            if(sortedTable[middle] > targetValue)
                right = middle - 1;
            else
                return middle;
        
    }
    return -1;
}

int main(){

    int testTable[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int testTableSize = sizeof(testTable)/sizeof(testTable[0]);
    int testTargetValue = 5;
    int testResult = binarySearch(testTable, testTableSize, testTargetValue);
    if(testResult != 4) {
        cout << "Binary Search failed for value: " << testTargetValue << endl;
    }

    cout << "Works " << testTargetValue << endl;

    return 0;
}
