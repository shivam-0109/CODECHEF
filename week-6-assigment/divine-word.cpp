
#include <iostream>
using namespace std;
int main()
{
    string s; cin>>s;
    int a[26]={0}; 
    int len = (int)s.size();  
    for(int i=0;i<len;i++)
    {
        char x = s[i]; 
        int p = int(x); 
        p = p-97; 
        a[p]=1;
    }
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0;  
        string k; cin>>k; 
        for(int j=0;j<k.size();j++)
        {
            char z = k[j];
            int h = int(z);  
            h = h-97;  
            if(a[h]==0)
                count++;
            else
                count=count;
        }
        if(count>0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        
    }
}
