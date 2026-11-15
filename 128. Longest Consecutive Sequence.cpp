#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 0;

        for (auto num : st) {
            if (st.find(num - 1) == st.end()) {
                int currentnum = num;
                int length = 1;

                for (; st.find(currentnum + 1) != st.end(); ) {
                    currentnum++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int result = sol.longestConsecutive(nums);
    cout << "Longest consecutive sequence length: " << result << endl;

    return 0;
}
