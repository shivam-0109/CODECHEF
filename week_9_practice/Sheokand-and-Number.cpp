#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
	long int t;
	cin>>t;
	while(t--)
	{
	    long int x,count=0;
	    cin>>x;
	    /*if(x==1)
	    {
	        cout<<"2"<<endl;
	        continue;
	    }*/
	    
	    long int i=0;
	    while(1>0)
 	    {
	        if(x<pow(2,i))
	        {
	           //cout<<pow(2,i)<<" ";
	           break;
	        }
	        i++;
	    }
	    //cout<<i<<" ";
	    long int p=pow(2,i-1);
	    long int y=x-pow(2,i-1);
	    i=0;
	    while(1>0)
	    {
	        if(y<pow(2,i))
	        {
	           break;
	        }
	        i++;
	    }
	    //cout<<i<<" ";
	    if(y==0)
	    {
	        //cout<<"Reached"<<" ";
	        if(x==1)
	        {
	            cout<<"2"<<endl;
	        }
	        else
	        {
	            cout<<"1"<<endl;
	        }
	        continue;
	    }
	    
	    long int q=pow(2,i-1);
	    long int r=pow(2,i);
	    if(q==p)
	    {
	        cout<<min(r-y,(y-p)+1)<<endl;
	    }
	    else if(r==p)
	    {
	        cout<<min(y-q,r-y+1)<<endl;
	    }
        else
        {
            cout<<min(r-y,y-q)<<endl;
        }
	    
	   
	}
	return 0;
}
