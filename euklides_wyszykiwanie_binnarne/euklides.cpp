#include <iostream>

using namespace std;

int nwd_subtract(int a, int b){
   while (a != b)
   {
    if(a > b)
    a = a - b;
    else
    b = b - a;
   }
   return a;
}

int nwd_divide(int a, int b){
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

    return 0;
}
