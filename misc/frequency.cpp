#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequencies(int arr[], int size) {
    unordered_map<int, int> freqMap;

    // Count frequencies
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    // Print frequencies
    cout << "Frequencies of elements:" << endl;
    for (auto pair : freqMap) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times" << endl;
    }
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequencies(arr, size);

    return 0;
}
