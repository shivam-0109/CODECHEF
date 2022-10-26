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
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(!k.empty())
            {
                
                 if(k.top()==s[i])
                {
                    k.pop(); count--;
                }
                else
                {
                     k.push(s[i]);count++;
                }
            }
            else
            {
               
               k.push(s[i]);count++;
            }
        }
        cout<<count<<endl;
    }
}
