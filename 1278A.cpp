#include <bits/stdc++.h>
using namespace std;

 int main(){
    int t;
    cin >> t;
    while(t--){
        string p;
        cin >> p;
        string q;
        cin >> q;
        int x = p.size();
        int y = q.size();
        bool found = false;

        map <char, int> mp;
        for(int i=0; i<x; i++) mp[p[i]]++;

        for(int i=0;i<= y-x;i++){
            map<char, int> mp1;
            for(int j=i;j<i+x;j++){
            mp1[q[j]]++;
            }
            if(mp == mp1){
                found = true;
                break;
            }
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
 }