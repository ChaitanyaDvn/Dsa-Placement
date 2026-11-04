#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {

        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {

            if (nums[j] <= pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[i + 1], nums[high]);

        return i + 1;
    }

    void quickSortHelper(vector<int>& nums, int low, int high) {

        if (low < high) {

            int p = partition(nums, low, high);

            quickSortHelper(nums, low, p - 1);
            quickSortHelper(nums, p + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {

        quickSortHelper(nums, 0, nums.size() - 1);

        return nums;
    }
};

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    Solution sol;
    vector<int> sorted = sol.quickSort(nums);

    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
