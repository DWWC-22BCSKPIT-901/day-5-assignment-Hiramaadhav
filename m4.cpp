
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found, return the index
        } else if (nums[mid] < target) {
            left = mid + 1; // Move to the right half
        } else {
            right = mid - 1; // Move to the left half
        }
    }
    return left; // Left is the insertion point
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int index = searchInsert(nums, target);
    cout << "The target index is: " << index << endl;

    return 0;
}
