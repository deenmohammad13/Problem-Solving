#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int count =0;
	while(t--)
	{
		long long int a,b;
		cin >> a >> b;
		if(a%b !=0)
		{
			int n = a%b;
			count = b-n;
			cout<<count<<endl;
		}
		else {
			count= 0;
		 cout<< count<< endl;
		}
			
	}
	return 0;
}