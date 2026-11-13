#include <bits/stdc++.h>
using namespace std;

pair<int, int> floorCeil(vector<int>& nums, int x) {
    int floorVal = -1;
    int ceilVal = -1;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] <= x) {
            floorVal = nums[i];
        }

        if (nums[i] >= x) {
            ceilVal = nums[i];
            break;
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

    cout << ans.first << " " << ans.second << endl;

    return 0;
}
