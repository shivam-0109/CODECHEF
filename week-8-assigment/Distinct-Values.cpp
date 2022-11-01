#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minimumOperations(int a[], int n)
{
 
    // Hash-table to store frequency
    unordered_map<int, int> mp;
 
    // Increase the frequency of elements
    for (int i = 0; i < n; i++)
        mp[a[i]] += 1;
 
    int count = 0;
 
    // Traverse in the map to sum up the (occurrences-1)
    // of duplicate elements
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if ((*it).second > 1)
            count += (*it).second-1;
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cout<<minimumOperations(a,n)<<endl;
	}
	return 0;
}
