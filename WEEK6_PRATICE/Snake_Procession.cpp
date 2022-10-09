#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int c=0;
	    bool m = true;
	    for(int i=0; i<n; i++){
	        if(str[i] == 'H'){
	            c++;
	            if(c == 2){
	                //cout<<"Invalid"<<endl;
	                m = false;
	                break;
	            }
	        }else if(str[i] == 'T'){
	            c--;
	            if(c < 0){
	                //cout<<"Invalid"<<endl;
	                m = false;
	                break;
	            }
	        }
	        
	    }
	    if(m == true && c == 0){
	        cout<<"Valid"<<endl;
	    }else {
	        cout<<"Invalid"<<endl;
	    }
	}
	return 0;
}
