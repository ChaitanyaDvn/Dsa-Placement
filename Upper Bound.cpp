#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& nums, int x) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = n;

    for (; low <= high;) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    cout << upperBound(nums, x);

    return 0;
}