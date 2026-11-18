#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        for (; left < right; ) {

            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    sol.reverseString(s);
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
