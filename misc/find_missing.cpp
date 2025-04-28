#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int n = size + 1; // Because one number is missing
    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;
    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Missing 3
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingNumber(arr, size);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
