#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int m=str.length();
        vector<char> v;
        if(m>=5)
        {
        for(int i=0;i<m;i++)
        {
            if(str[i]=='p'&&str[i+1]=='a'&& str[i+2]=='r'&& str[i+3]=='t' && str[i+4]=='y')
            {
                v.push_back('p');
                v.push_back('a');
                v.push_back('w');
                v.push_back('r');
                v.push_back('i');
                i=i+4;
            }
            else
            {
                v.push_back(str[i]);
            }
        
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
	// your code goes here
  //by shivam-0109
	return 0;
}
