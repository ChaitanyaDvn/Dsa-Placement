#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {

            if (st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Contains Duplicate (nums1): " << (sol.containsDuplicate(nums1) ? "true" : "false") << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Contains Duplicate (nums2): " << (sol.containsDuplicate(nums2) ? "true" : "false") << endl;

    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "Contains Duplicate (nums3): " << (sol.containsDuplicate(nums3) ? "true" : "false") << endl;

    return 0;
}
