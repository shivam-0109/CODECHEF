#include <bits//stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<pair<int,int>,unordered_set<double>> mp;
	    int mx = 1;
	    for(int i = 0 ; i < n ;i++){
	        int a,b,c;
	        cin>>a>>b>>c;
	        int g = __gcd(a,b);
	        double d = c*1.0;
	        mp[{a/g,b/g}].insert(d/g);
	        
	    }
	    for(auto d : mp){
	        mx = max(mx, (int)d.second.size());
	    }
	    cout<<mx<<endl;
	}
	return 0;
}
