#include <time.h>
// #include <conio.h>
#include <iostream>

using namespace std;

int main() {
   
    time_t czas;
    struct tm * data;
    char godzina[ 80 ];
   
    time( & czas );
    data = localtime( & czas );
   
    strftime( godzina, 80, "Teraz jest %H:%M:%S.", data );
    cout << godzina;
   
    // getch();
    return 0;
}