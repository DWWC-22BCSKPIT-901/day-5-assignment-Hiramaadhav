#include <iostream>
#include <vector>

int findFirstOccurrence(const std::vector<int>& arr, int k) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == k) {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // If k is not found in the array
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 3};
    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int position = findFirstOccurrence(arr, k);
    if (position != -1) {
        std::cout << "The first occurrence of " << k << " is at index: " << position << std::endl;
    } else {
        std::cout << k << " is not present in the array." << std::endl;
    }

    return 0;
}
