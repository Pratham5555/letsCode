#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        long long ans = n - 1;

        for(long long x = 1; x*x <= n; x++) {
            long long y = (n + x - 1) / x;

            ans = min(ans, x + y - 2);
        }

        cout << ans << endl;
    }

    return 0;
}