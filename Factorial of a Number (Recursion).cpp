#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {

    // Base condition
    if (n == 0) {
        return 1;
    }

    // Recursive call
    return 1LL * n * factorial(n - 1);
}

int main() {
    int n = 5;

    long long result = factorial(n);
    cout << "Factorial of " << n << " = " << result << endl;

    return 0;
}
