#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {

            int product = 1;

            for (int j = i; j < n; j++) {

                product = product * nums[j];

                maxi = max(maxi, product);
            }
        }

        return maxi;
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
