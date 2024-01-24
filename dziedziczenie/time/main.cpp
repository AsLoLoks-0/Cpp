#include "TimeWithControl.cpp"
#include "Time.cpp"
// #include "TimeWithControl.h"
// #include "Time.h"
#include <iostream>


using namespace std;

int main(){
    Time nazwa(1, 34, 23);
    std::cout << "Podany czas to: "<<nazwa.getHour() << "\n";
    TimeWithControl cokolwiek;
    cokolwiek.setHour(122334);
    std::cout << "Podany czas to: " << cokolwiek.getMinute();
    return 0;
}
