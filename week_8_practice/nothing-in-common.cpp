#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t;
cin >> t;
while(t--){
int n,m;
cin>>n>>m;
int arr[n],brr[m];
set<int > s;
for(int i=0;i<n;i++){
    cin>>arr[i];
    s.insert(arr[i]);
}
for(int i=0;i<m;i++){
    cin>>brr[i];
     s.insert(brr[i]);
}
int size = s.size();
cout<<(n+m)-size<<endl;
}
return 0;
}
