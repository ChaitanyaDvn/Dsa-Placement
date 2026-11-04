#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    Solution sol;
    vector<int> sorted = sol.bubbleSort(nums);

    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}