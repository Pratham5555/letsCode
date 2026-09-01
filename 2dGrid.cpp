#include <bits/stdc++.h>
using namespace std;

void diagonal(int x, int y, vector<vector<int>> &arr, int n){
    while(x>=0 && y<n){
        cout << arr[x][y] << " ";
        x--, y++;
    }
    cout << endl; 
}

int main(){
    int n;
    cin >> n;
    vector <vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }

    for(int i=0; i<n; i++){
        diagonal(i, 0, v, n);
    }

    return 0;
}