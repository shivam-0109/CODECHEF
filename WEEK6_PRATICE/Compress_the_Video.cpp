#include <iostream>
using namespace std;

int main() {
	int t;
   cin>>t; 
   while(t--)
   {
    int n;
    cin>>n;
    int c=n; 
    int a[n];
    for (int i=0;i<n;i++) 
   cin>>a[i];
    if(n==1)
           cout<<n<<endl; 
    else if(n==2)
{if( a[0]==a[1])
cout<<n-1<<endl;
else 
cout<<n<<endl;
} 
else if(n>2)
{
for (int i=0;i<n;i++){
if(a[i]==a[i-1])
c=c-1;
} 
cout<<c<<endl;
}

}
}
