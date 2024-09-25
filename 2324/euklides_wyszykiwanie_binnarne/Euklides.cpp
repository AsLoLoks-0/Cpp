#include <iostream>

using namespace std;

int nwdSubtract(int a, int b){
    while (a != b){
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int nwdDivide(int a, int b){
    int temp = 0;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){

    int a = 12;
    int b = 18;
    int result1 = nwdSubtract(a, b);
    int result2 = nwdDivide(a, b);

    if (result1 != 6 || result2 != 6)
    {
        cout << "Test failed, expected 6, got " << result1 << " and " << result2 << endl;
    }
    else
    {
        cout << "Test successful" << endl;
    }

    return 0;
}
