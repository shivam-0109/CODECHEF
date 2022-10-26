#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    int aa[100],bb[100],cc[100],dd[100];
	    cin>>a;
	    for(int i=0;i<a;i++)
	    {
	        cin>>aa[i];
	    }
	    cin>>b;
	    for(int i=0;i<b;i++)
	    {
	        cin>>bb[i];
	    }
	    cin>>c;
	    for(int i=0;i<c;i++)
	    {
	        cin>>cc[i];
	    }
	    cin>>d;
	    for(int i=0;i<d;i++)
	    {
	        cin>>dd[i];
	    }
	    
	    sort(aa,aa+a);
	    sort(bb,bb+b);
	    sort(cc,cc+c);
	    sort(dd,dd+d);
	    
	    
	   
	    int c1=0;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(cc[i] == aa[j])
                {
                    c1++;
                    break;
                }
            }
        }
        int c2=0;
        for(int i=0;i<d;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(dd[i] == bb[j])
                {
                    c2++;
                    break;
                }
            }
        }
        if(c1 == c && c2 == d)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
        cout<<endl;
	}
	return 0;
}
