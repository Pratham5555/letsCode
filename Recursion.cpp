#include <bits/stdc++.h>
using namespace std;

// FIBONACCI

// int fib(int n){
//     if(n==0 || n==1) return n;
//     return fib(n-1) + fib(n-2);
// }

int bs(int arr[], int target, int s, int e){
    int mid = s + (e-s)/2;
    if(s>e) return -1;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target){
        return bs(arr, target, mid+1, e);
    }
    else return bs(arr, target, s, mid-1);
}

int main(){
    int arr[] = {1,3,55,2222, 188888};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = bs(arr, 55, 0, n-1);
    cout << x << endl;
    return 0;
}