#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int l=(-1 + sqrt((8*n)+1))/2;
	    cout<<l;
	    cout<<"\n";
	}
	return 0;
}
