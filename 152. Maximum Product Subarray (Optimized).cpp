#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // Swap when current number is negative
            if (nums[i] < 0) {
                swap(maxi, mini);
            }

            // Calculate maximum and minimum products
            maxi = max(nums[i], maxi * nums[i]);
            mini = min(nums[i], mini * nums[i]);

            // Update the overall maximum
            ans = max(ans, maxi);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, -2, 4};
    cout << "Max Product: " << sol.maxProduct(nums) << endl;

    vector<int> nums2 = {-2, 0, -1};
    cout << "Max Product 2: " << sol.maxProduct(nums2) << endl;

    return 0;
}
