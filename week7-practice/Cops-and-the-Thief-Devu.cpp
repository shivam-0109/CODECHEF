#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// 100 houses in total
	int t; cin>>t;
	int m,x,y;
	int arr[10];
	while(t--){
	    cin>>m>>x>>y;
	    int mul=x*y;
	    for(int i=0; i<m; i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+m);
	    int s=1,e=100;
	    int ans=0;
	    int st=arr[0]-mul;
	    if(st>s){
	        ans+=(st-s);
	    }
	    s=arr[0]+mul;
	    for(int i=1; i<m; i++){
	        int num1=arr[i]-mul;
	        int num2=arr[i]+mul;
	        if(num1>s){
	            ans+=(num1-s-1);
	        }
	        s=num2;
	    }
	    int temp=arr[m-1]+mul;
	    if(e>temp){
	        ans+=(e-temp);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
