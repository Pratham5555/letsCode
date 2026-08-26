#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long c, sum;
        cin >> c >> sum;

        long long k = min(c, sum);

        long long q = sum / k;
        long long r = sum % k;

        long long cost = r * (q + 1) * (q + 1) + (k-r) * q * q;
        cout << cost << endl;
    }

    return 0;
}