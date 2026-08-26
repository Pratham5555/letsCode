#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        bool possible = true;
        for(int i=0; i<s.size()-1; i++){
            if(s[i] == s[i+1] && s[i] != '?'){
                possible = false;
                break;
            }
        }
        if(!possible){
             cout << -1 << endl;
             continue;
        }
        else {
            for(int i=0; i<s.size(); i++){
                if(s[i] == '?'){
                    for(char ch = 'a'; ch <= 'c'; ch++){
                        if(i > 0 && s[i-1] == ch)
                            continue;

                        if(i < s.size()-1 && s[i+1] == ch)
                            continue;

                        s[i] = ch;
                        break;
                    }

                }
            }
            cout << s << endl;
        }
    }
    return 0;
}