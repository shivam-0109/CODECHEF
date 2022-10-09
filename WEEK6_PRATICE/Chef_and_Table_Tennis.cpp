#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0')
	        a++;
	        else
	        b++;
	    }
	    if(a>b)
	    cout<<"LOSE"<<endl;
	    else
	    cout<<"WIN"<<endl;
	}
	return 0;
}
