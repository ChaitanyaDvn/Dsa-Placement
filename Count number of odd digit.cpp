#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int count = 0;

    for (; n > 0; n = n / 10) {

        int digit = n % 10;

        if (digit % 2 != 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}