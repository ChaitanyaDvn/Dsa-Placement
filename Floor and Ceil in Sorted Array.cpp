#include <bits/stdc++.h>
using namespace std;

pair<int, int> floorCeil(vector<int>& nums, int x) {
    int low = 0;
    int high = nums.size() - 1;

    int floorVal = -1;
    int ceilVal = -1;

    for (; low <= high;) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x) {
            floorVal = nums[mid];
            ceilVal = nums[mid];
            break;
        }
        else if (nums[mid] < x) {
            floorVal = nums[mid];
            low = mid + 1;
        }
        else {
            ceilVal = nums[mid];
            high = mid - 1;
        }
    }

    return {floorVal, ceilVal};
}

int main() {
    int n, x;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    pair<int, int> ans = floorCeil(nums, x);

    cout << ans.first << " " << ans.second;

    return 0;
}
