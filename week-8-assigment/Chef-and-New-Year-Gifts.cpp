#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findMinDiff(int arr[], int n)
{
    // Initialize difference as infinite
    int diff = INT_MAX;
 
    // Find the min diff by comparing difference
    // of all possible pairs in given array
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (abs(arr[i] - arr[j]) < diff)
                diff = abs(arr[i] - arr[j]);
 
    // Return min diff
    return diff;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<findMinDiff(a,n)<<endl;
    }
    return 0;
}
