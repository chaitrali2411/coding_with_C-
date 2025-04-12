#include <iostream>
#include <unordered_set>
using namespace std;

// Function to merge two unsorted arrays without duplicates
void mergeWithoutDuplicates(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> mergedSet;

    // Insert elements from first array
    for (int i = 0; i < size1; i++) {
        mergedSet.insert(arr1[i]);
    }

    // Insert elements from second array
    for (int i = 0; i < size2; i++) {
        mergedSet.insert(arr2[i]);
    }

    // Print the result
    cout << "Merged Array without duplicates: ";
    for (int num : mergedSet) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {5, 1, 3, 7, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 1, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Array 1: ";
    for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < size2; i++) cout << arr2[i] << " ";
    cout << endl;

    mergeWithoutDuplicates(arr1, size1, arr2, size2);

    return 0;
}
