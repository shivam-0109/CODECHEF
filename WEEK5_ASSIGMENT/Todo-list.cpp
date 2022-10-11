#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,count=0,check=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        i=n-1;
        while(i>=0){
            if(arr[i]<8){
                cout<<i+1<<endl;
                break;
            }
            else{
                i--;
            }
        }
    }
	// your code goes here
	return 0;
}
