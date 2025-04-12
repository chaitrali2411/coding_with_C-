#include <iostream>
using namespace std;

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2]; // Final merged array

    cout << "Array 1: ";
    printArray(arr1, size1);

    cout << "Array 2: ";
    printArray(arr2, size2);

    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    cout << "Merged Array: ";
    printArray(merged, size1 + size2);

    return 0;
}
