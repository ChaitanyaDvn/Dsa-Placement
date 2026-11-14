#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++) {
                freq[s[j]]++;

                int oddCount = 0;

                for (auto x : freq) {
                    if (x.second % 2 == 1) {
                        oddCount++;
                    }
                }

                if (oddCount <= 1) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    string s = "aabcb";

    int result = sol.countSubstrings(s);
    cout << "Count: " << result << endl;

    return 0;
}
