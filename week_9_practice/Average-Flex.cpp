#include <iostream>
#include <bits/stdc++.h>
//by shivam-0109
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int t;
	cin>>t;
	while(t--){
	  int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
      }
      sort(arr,arr+n);
      int mid = (n) / 2;
      int total = n-mid;

        for (int i = 0; i < mid;i++)
        {
            if(arr[i]==arr[mid])
                total++;
        }

            cout <<total<< endl;
      
	}
	return 0;
}
