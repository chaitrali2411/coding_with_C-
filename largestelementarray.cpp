#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int max = arr[0];  // Assume the first element is the largest

    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];  // Update max if a bigger element is found
        }
    }

    cout << "The largest element in the array is: " << max << endl;

    return 0;
}
