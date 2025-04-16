#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 4, 2, 8, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique[size];  // To store unique elements
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check if arr[i] already exists in unique[]
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
