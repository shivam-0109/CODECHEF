#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int a,b,c,second_lar;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
            if(a>c)
            {
              if(c>b)
                second_lar=c;
               else
                 second_lar=b;
            }
            else
               second_lar=a;
            
        }
        else
        {
             if(b>c)
            {
              if(c>a)
                second_lar=c;
               else
                 second_lar=a;
            }
            else
               second_lar=b;
            
        }
        cout<<second_lar<<endl;
    }
    // your code goes here
    return 0;
}
