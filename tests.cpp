#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void createFile(int (*csvColumnsValues[])(), int size, string filename = "unnamedFile.csv", int lines = 1, string filePath = "C:\\Users\\Dom\\BinaryBananas\\C++\\Cpp\\fileStorage\\") {
    ofstream csvFile(filePath + filename);

    if (!csvFile.is_open()) 
        cerr << "Unable to create or open the file." << endl;

    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < size; j++) {
            csvFile << csvColumnsValues[j]();
            if(j != size - 1)
                csvFile << ",";
        }
        csvFile << endl;
    }

    csvFile.close();

    cout << "CSV file created and written successfully." << endl;
}

int randomNumber() {
    return rand() % 1001;
}

int main() {
    srand(time(NULL));

    int (*csvColumnsValues[])() = {randomNumber, randomNumber};
    int size = sizeof(csvColumnsValues) / sizeof(csvColumnsValues[0]);

    createFile(csvColumnsValues, size, "nwdSpeedTestValues.csv", 10);

    return 0;
}
