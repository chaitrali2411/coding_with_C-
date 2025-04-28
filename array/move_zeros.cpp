#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int size) {
    int nonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    // Fill the remaining positions with 0
    while (nonZeroIndex < size) {
        arr[nonZeroIndex++] = 0;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    moveZerosToEnd(arr, size);

    cout << "Array after moving zeros to end: ";
    printArray(arr, size);

    return 0;
}
