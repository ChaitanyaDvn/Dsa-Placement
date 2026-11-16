#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        int sum = 0;
        int count = 0;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            count += mp[sum - k];

            mp[sum]++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = sol.subarraySum(nums, k);
    cout << "Total subarrays with sum " << k << ": " << result << endl;

    return 0;
}
