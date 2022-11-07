#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	int ce=0,co=0;
	for(int i=1;i<=n;i++){
	    if(a[i]%2==0)
	    ce++;
	    else
	    co++;
	}
	if(ce>co)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	return 0;
}
