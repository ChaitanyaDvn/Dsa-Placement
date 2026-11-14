#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < s.size(); j++) {
                freq[s[j]]++;

                int maxFreq = 0;
                int minFreq = INT_MAX;

                for (auto it : freq) {
                    maxFreq = max(maxFreq, it.second);
                    minFreq = min(minFreq, it.second);
                }

                sum += maxFreq - minFreq;
            }
        }

        return sum;
    }
};

int main() {
    Solution sol;
    string s = "aabcb";

    int result = sol.beautySum(s);
    cout << "Beauty sum: " << result << endl;

    return 0;
}
