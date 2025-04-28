#include <iostream>
#include <vector>

// Perform a linear search on a vector.
// Returns the index of the first occurrence of key, or -1 if not found.
int linearSearch(const std::vector<int>& arr, int key) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key)
            return static_cast<int>(i);
    }
    return -1;
}

int main() {
    // Example array
    std::vector<int> data = { 5, 3, 8, 1, 9, 2 };

    // Keys to search for
    std::vector<int> keys = { 8, 4 };

    for (int key : keys) {
        int idx = linearSearch(data, key);
        if (idx != -1)
            std::cout << "Found " << key << " at index " << idx << ".\n";
        else
            std::cout << key << " not found in the array.\n";
    }

    return 0;
}
