#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<char>& s, int left, int right) {
        // Base condition
        if (left >= right) {
            return;
        }

        // Swap characters
        swap(s[left], s[right]);

        // Recursive call
        reverse(s, left + 1, right - 1);
    }

    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    sol.reverseString(s);
    cout << "Reversed string (recursion): ";
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
