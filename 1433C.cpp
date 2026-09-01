#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int mx = *max_element(v.begin(), v.end());

        int ans = -1;

        for(int i = 0; i < n; i++) {

            if(v[i] != mx)
                continue;

            if(i > 0 && v[i-1] < mx) {
                ans = i + 1;
                break;
            }

            if(i < n-1 && v[i+1] < mx) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}