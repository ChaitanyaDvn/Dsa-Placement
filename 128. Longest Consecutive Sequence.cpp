#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        // Step 1: Store all elements in the hash set
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 0;

        // Step 2: Check every number
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];

            // Step 3: Find the starting number
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int length = 1;

                // Step 4: Count consecutive numbers
                for (; st.find(currentNum + 1) != st.end(); ) {
                    currentNum++;
                    length++;
                }

                // Step 5: Update maximum length
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
