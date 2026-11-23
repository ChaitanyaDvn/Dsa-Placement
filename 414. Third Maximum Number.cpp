#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == first || nums[i] == second || nums[i] == third) {
                continue;
            }

            if (nums[i] > first) {
                third = second;
                second = first;
                first = nums[i];
            }
            else if (nums[i] > second) {
                third = second;
                second = nums[i];
            }
            else if (nums[i] > third) {
                third = nums[i];
            }
        }

        if (third == LLONG_MIN) {
            return first;
        }

        return third;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 2, 1};
    cout << "Third Max (nums1): " << sol.thirdMax(nums1) << endl;

    vector<int> nums2 = {1, 2};
    cout << "Third Max (nums2): " << sol.thirdMax(nums2) << endl;

    vector<int> nums3 = {2, 2, 3, 1};
    cout << "Third Max (nums3): " << sol.thirdMax(nums3) << endl;

    return 0;
}
