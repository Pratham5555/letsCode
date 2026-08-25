#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> beautiful;

    for (int digit = 1; digit <= 9; digit++) {
        int num = 0;

        for (int len = 1; len <= 9; len++) {
            num = num * 10 + digit;
            beautiful.push_back(num);
        }
    }

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;

        for (int x : beautiful) {
            if (x <= n) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

