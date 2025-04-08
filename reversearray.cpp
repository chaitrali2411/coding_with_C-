#include <iostream>
using namespace std;

void reverarray(int arr[], int size){
    int start = 0, end = size - 1;
    // Use start < end to avoid double swapping.
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverarray(arr, size);  // Added semicolon here

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
