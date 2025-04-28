#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 7, 8, 3, 14, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];  // Add even number to evenSum
        } else {
            oddSum += arr[i];   // Add odd number to oddSum
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
