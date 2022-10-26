#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    stack <char> k;
    for(int i=0;i<s.size();i++)
    {
        if(!k.empty())
        {
            if((k.top()=='[' && s[i]==']') ||( k.top()=='(' && s[i]==')') || (k.top()=='{' && s[i]=='}'))
            {
                
            k.pop();
            }
            else
            k.push(s[i]);
            
        }
        else
        {
            k.push(s[i]);
        }
    }
    if(k.empty())
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
    }
    
}
