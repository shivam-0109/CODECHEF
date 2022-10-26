#include <bits/stdc++.h>
//by shivam-0109
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string arr1[n];
      string arr2[n];
      for(int i=0;i<n;i++){
          cin>>arr1[i]>>arr2[i];
      }
      for(int i=0;i<n;i++){
      int c=0;
          for(int j=0;j<n;j++){
              if(j!=i){
              if(arr1[i]==arr1[j]){
                  cout<<arr1[i]<<" "<<arr2[i]<<endl;
                  c++;
                  break;
              }
              }
          }
          if(c==0){
              cout<<arr1[i]<<endl;
          }
      }
  }
	return 0;
}
