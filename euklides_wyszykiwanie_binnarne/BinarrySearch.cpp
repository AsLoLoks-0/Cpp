#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;
struct Element {
    int value;
    int index;

    Element(int val, int idx) : value(val), index(idx) {}
};

bool compareElement(const Element& a, const Element& b) {
    return a.value < b.value;
}

int binarySearch(const vector<Element>& elements, int target) {
    int left = 0;
    int right = elements.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (elements[mid].value == target) {
            return mid;
        } else if (elements[mid].value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    srand(time(NULL));

    vector<Element> elements;

    const int num_elements = 1000000;
    for (int i = 0; i < num_elements; ++i) {
        int value = rand() % 1001;
        elements.emplace_back(value, i);
    }

    sort(elements.begin(), elements.end(), compareElement);

    int target_value = 0;
    int found_index = binarySearch(elements, target_value);

    if (found_index != -1) {
        cout << "Wartość " << target_value << " znaleziona na indeksie " << elements[found_index].index << endl;
    } else {
        cout << "Wartość " << target_value << " nie znaleziona" << endl;
    }

    ofstream outputFile("C:\\Users\\Dom\\BinaryBananas\\C++\\Cpp\\fileStorage\\sorted_data.txt");
    if (outputFile.is_open()) {
        for (const auto& element : elements) {
            outputFile << element.value << endl;
        }
        outputFile.close();
    } else {
        cerr << "Nie udało się otworzyć pliku do zapisu." << endl;
        return 1;
    }

    vector<int> test_sizes = {1000, 10000, 100000, 1000000, 10000000};
    for (int size : test_sizes) {
        vector<Element> test_elements;
        for (int i = 0; i < size; ++i) {
            int value = rand() % 1001;
            test_elements.emplace_back(value, i);
        }

        sort(test_elements.begin(), test_elements.end(), compareElement);

        clock_t start = clock();
        binarySearch(test_elements, target_value);
        clock_t end = clock();

        double elapsed_time = double(end - start) / CLOCKS_PER_SEC;
        cout << "Czas wyszukiwania dla " << size << " elementów: " << elapsed_time << " sekund" << endl;
    }

    return 0;
}
