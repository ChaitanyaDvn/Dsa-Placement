#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 1. Merge two sorted halves
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;

        int i = low;
        int j = mid + 1;

        // Compare elements
        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Copy remaining left elements
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Copy remaining right elements
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy temp into original array
        for (int x = 0; x < temp.size(); x++) {
            nums[low + x] = temp[x];
        }
    }

    // 2. Divide and sort
    void mergeSort(vector<int>& nums, int low, int high) {
        // Base condition
        if (low >= high) {
            return;
        }

        // Find middle
        int mid = low + (high - low) / 2;

        // Divide left half
        mergeSort(nums, low, mid);

        // Divide right half
        mergeSort(nums, mid + 1, high);

        // Merge both sorted halves
        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 2, 3, 1};

    vector<int> sorted = sol.sortArray(nums);
    cout << "Sorted: ";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
