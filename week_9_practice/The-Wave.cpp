#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	    ll n,q;
	    cin>>n>>q;
	    vector<ll> v(n);
	    for(ll i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    while(q--){
	        ll x;
	        cin>>x;
	        ll id = lower_bound(v.begin(),v.end(),x)-v.begin();
	        if(v[id]==x){
	            cout<<0<<endl;
	            continue;
	        }
	        ll neg = n-id;
	        ll pos = id;
	        if(neg%2==0){
	            cout<<"POSITIVE"<<endl;
	        }else{
	            cout<<"NEGATIVE"<<endl;
	        }
	    }
	return 0;
}
