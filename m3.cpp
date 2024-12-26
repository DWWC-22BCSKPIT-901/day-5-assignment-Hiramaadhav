#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    // Sort the array in non-decreasing order
    sort(nums.begin(), nums.end());

    vector<int> result;
    // Iterate through the sorted array and collect indices where nums[i] == target
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 5};
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    vector<int> indices = targetIndices(nums, target);
    if (!indices.empty()) {
        cout << "Target indices: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No target indices found." << endl;
    }

    return 0;
}
