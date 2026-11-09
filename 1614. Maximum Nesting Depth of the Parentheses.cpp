#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int count = 0;
    int maxDepth = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            count++;

            maxDepth = max(maxDepth, count);
        }
        else if (s[i] == ')') {
            count--;
        }
    }

    return maxDepth;
}

int main() {
    string s;
    cin >> s;

    cout << maxDepth(s);

    return 0;
}