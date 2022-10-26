#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n,m,k,i,b,c,c1=0,c2=0;
    cin>>n>>m>>k;
    int a[n+1]={0};
    for(i=0;i<m;i++)
    {
        cin>>b;
        a[b]++;
    }
    for(i=0;i<k;i++)
    {
        cin>>c;
        a[c]++;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==2)
        c1++;
        if(a[i]==0)
        c2++;
    }
    cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}
