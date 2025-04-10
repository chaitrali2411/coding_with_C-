#include<iostream>
using namespace std;

// Custom function to interchange two integers
void exchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to arrange evens first, then odds
void arrangeEvensFirst(int arr[], int length)
{
    int start = 0, end = length - 1;

    while (start < end)
    {
        // Move start forward if even number found
        while (arr[start] % 2 == 0 && start < end)
            start++;

        // Move end backward if odd number found
        while (arr[end] % 2 == 1 && start < end)
            end--;

        // Swap if mismatch found
        if (start < end)
        {
            exchange(&arr[start], &arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int data[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Initial array: ";
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";

    arrangeEvensFirst(data, size);

    cout << "\nReordered array: ";
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";
    
    return 0;
}
