#include <iostream>
using namespace std;
int compare(string a,string b){
    int i,j;
    int n=a.length(),m=b.length(),p=0;
    for(i=0;i<m;i++){
        p=0;
        for(j=0;j<n;j++){
            if(b[i]==a[j])
            p++;
        }
        if(p<1)
        return 0;
    }
    return 1;
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--){
	    string b;
	    cin>>b;
	    if(compare(s,b))
	    cout<<"Yes";
	    else
	    cout<<"No";
	    cout<<endl;
	}
	return 0;
}
