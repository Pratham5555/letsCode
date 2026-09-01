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


int main(){
    int n;
    cin >> n;
    
    cout << s << endl;
    return 0;
}