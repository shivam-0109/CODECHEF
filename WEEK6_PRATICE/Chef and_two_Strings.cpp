#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    int l=s1.length();
	    int dmax=0,dmin=0;
	    for(int i=0;i<l;i++)
	    {
	        if(s1[i]=='?' || s2[i]=='?')
	        {
	            dmax++;
	        }
	        else if(s1[i]!=s2[i])
	        {
	            dmin++;
	        }
	    }
	    cout<<dmin<<" "<<dmax+dmin<<endl;
	}
	return 0;
}
