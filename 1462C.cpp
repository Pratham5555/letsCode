#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x > 45){
            cout << -1 << endl;
            continue;
        }
        vector <int> v;
        for(int i=9; i>=1; i--){
            if(x >= i){
                v.push_back(i);
                x = x-i;
            }
        }
        sort(v.begin(), v.end());
        for(int i : v){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}