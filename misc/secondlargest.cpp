#include <iostream>
#include <limits.h>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must contain at least 2 elements." << endl;
        return INT_MIN;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element (all elements may be equal)." << endl;
        return INT_MIN;
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 20, 8, 20, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);
    if (result != INT_MIN) {
        cout << "Second largest element is: " << result << endl;
    }

    return 0;
}
