#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    // Create a map to store the priority of elements in arr2
    unordered_map<int, int> priority;
    for (int i = 0; i < arr2.size(); ++i) {
        priority[arr2[i]] = i; // Assign priority based on index in arr2
    }

    // Sort arr1 with a custom comparator
    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        if (priority.count(a) && priority.count(b)) {
            return priority[a] < priority[b]; // Compare based on priority in arr2
        }
        if (priority.count(a)) {
            return true; // a has priority, so it comes first
        }
        if (priority.count(b)) {
            return false; // b has priority, so it comes first
        }
        return a < b; // Both are not in arr2, sort in ascending order
    });

    return arr1;
}

int main() {
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    vector<int> result = relativeSortArray(arr1, arr2);

    cout << "Sorted array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
