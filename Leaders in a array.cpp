#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leaders;

    // Last element is always a leader
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {

        // Check if current element is greater
        // than or equal to all elements on its right
        if (arr[i] >= maxRight) {

            leaders.push_back(arr[i]);

            // Update maximum element on the right
            maxRight = arr[i];
        }
    }

    // Reverse because we traversed right to left
    reverse(leaders.begin(), leaders.end());

    // Print leaders
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }

    return 0;
}