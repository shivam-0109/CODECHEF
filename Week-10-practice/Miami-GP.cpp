#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        y*=100;
        x*=107;
        if(y<=x)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
