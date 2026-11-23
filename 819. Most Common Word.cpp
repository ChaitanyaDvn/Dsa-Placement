#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";

        for (int i = 0; i < paragraph.size(); i++) {

            char ch = tolower(paragraph[i]);

            if (isalpha(ch)) {
                word += ch;
            }
            else {
                if (word != "" && ban.find(word) == ban.end()) {
                    freq[word]++;
                }

                word = "";
            }
        }

        if (word != "" && ban.find(word) == ban.end()) {
            freq[word]++;
        }

        string ans = "";
        int maxi = 0;

        for (auto it : freq) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};
    cout << "Most Common Word: " << sol.mostCommonWord(paragraph, banned) << endl;

    return 0;
}
