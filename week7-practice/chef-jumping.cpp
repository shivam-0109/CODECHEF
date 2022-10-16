#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n; cin >> n;
	if((n%3==1 && n%2==1) || (n%3==0 && n%2==0)) cout << "yes\n";
	else if(n%2==0 || n%3==2)
	{
		cout << "no\n";
	}
	else cout << "yes\n";
}
