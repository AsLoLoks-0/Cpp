#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int sortedTable[], int tableSize, int targetValue) is
    int left = 0;
    int right = tableSize - 1;
    int middel = 0; // inintialize middel here and set middel := leftrith at bottom
    while(left =< right){
        middel = floor((left + right) / 2);
        if sortedTable[middel] < targetValue then
            left := middel + 1;
        else if sortedTable[middel] > targetValue then
            right := middel - 1;
        else:
            return middel;
    }
    return -1;

int main(){

    return 0;
}
