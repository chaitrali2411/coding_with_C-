#include<iostream>
using namespace std;

// Function to find and print the most frequent number(s)
void mostFrequent(int arr[], int size) {
    int maxCount = 0;

    // Find the highest frequency
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    // Print the number(s) with the highest frequency
    cout << "\nMost frequent number(s): ";
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == maxCount) {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    alreadyPrinted = true;
                    break;
                }
            }
            if (!alreadyPrinted) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    mostFrequent(nums, n);

    return 0;
}
