#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,h;
long long bananas[N];
 
bool check(long long k){
    long long sum=0;
    for(int i=0;i<n;i++){
        if(bananas[i]%k==0){
            sum+=bananas[i]/k;
        }else{
            sum+=(bananas[i]/k+1);
        }
    }
    if(sum<=h) return true;
    else return false;
} 
        
int main(){
    int t;cin>>t;
    while(t--){
       cin>>n>>h;
       for(int i=0;i<n;i++){
           cin>>bananas[i];
       }
       
       long long lo=1,hi=1e9,mid;
       while(hi-lo>1){
           mid=(lo+hi)/2;
           if(!check(mid)){
               lo=mid+1;
           }else{
               hi=mid;
           }
       }
       if(check(lo)) cout<<lo<<endl;
       else cout<<hi<<endl;
        
    }
}
