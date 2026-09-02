#include <bits/stdc++.h>
using namespace std;

// FIBONACCI

// int fib(int n){
//     if(n==0 || n==1) return n;
//     return fib(n-1) + fib(n-2);
// }

// Binary Search
// int bs(int arr[], int target, int s, int e){
//     int mid = s + (e-s)/2;
//     if(s>e) return -1;
//     if(arr[mid] == target) return mid;
//     else if(arr[mid] < target){
//         return bs(arr, target, mid+1, e);
//     }
//     else return bs(arr, target, s, mid-1);
// }

// Factorial
// int factorial(int n){
//     if(n == 0) return 1;
//     return n*factorial(n-1);
// }

// Sum of Digits
// int sod(int n){
//     if(n == 0) return 0;
//     return sod(n/10) + n%10;
// }

// Product of digits
// int prod(int n){
//     if(n%10 == n) return n;
//     return prod(n/10) * (n%10);
// }

// Reverse a number
// int sum = 0;

// void rev(int n){
//     if(n == 0) return;
//     sum = sum*10 + n%10;
//     rev(n/10);
// }

// Count no. of Zeros
// int cnt(int n){
//     return helper(n, 0);
// }

// int helper(int n, int c){
//     if(n == 0) return c;
//     int rem = n%10;
//     if(rem == 0) return helper(n/10, c+1);
//     return helper(n, c);
// }

// Number of steps
// int helper(int n, int steps){
//     if(n == 0) return steps;
//     if(n%2 == 0) return helper(n/2, steps+1);
//     return helper(n-1, steps+1);
// }
// int numberOfSteps(int n){
//     return helper(n, 0);
// }

// Check whether the array is sorted or not
// bool helper(vector<int> arr, int index, int n){
//     if(index == (n-1)) return true;
//     return (arr[index] <= arr[index+1]) && helper(arr, index+1, n);
// }

// Linear Search
// bool ls(vector <int> &arr, int target, int index){
//     if(index == arr.size()) return false;
//     if(arr[index] == target) return true;
//     return ls(arr, target, index+1);
// }

// Triangle1
// ****
// ***
// **
// *
// void triangle1(int r, int c){
//     if(r == 0) return;
//     if(r > c){
//         cout << "* ";
//         triangle1(r, c+1);
//     }
//     else{
//         cout << endl;
//         triangle1(r-1, 0);
//     }
// }

// MergeSort
vector<int> merge(vector<int>left, vector<int>right){
    int i=0, j=0;
    vector<int> ans;

    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]) {
            ans.push_back(left[i]);
            i++;
        }
        else{
            ans.push_back(right[j]);
            j++;
        }
    }
    while(i < left.size()){
        ans.push_back(left[i]);
        i++;
    }
    while(j < right.size()){
        ans.push_back(right[j]);
        j++;
    }
    return ans;
}

vector<int> mergeSort(vector<int> arr){
    if(arr.size() == 1) return arr;
    int mid = arr.size()/2;

    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    
    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];
    vector <int> ans = mergeSort(arr);

    for(int i=0; i<n; i++){
        cout << ans[i] << " " ;
    }

    return 0;
}