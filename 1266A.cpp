#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        int zeros = 0;
        bool isEven = false;

        for(char c : s){
            int x = c - '0';
            sum = sum + x;
            if(x == 0) zeros++;
            if(x % 2 == 0 && x != 0) isEven = true;
        }
        if((zeros >=2 || (zeros >= 1 && isEven))&& sum%3 == 0) cout << "red" << endl;
        else cout << "cyan" << endl;
    }
    return 0;
}