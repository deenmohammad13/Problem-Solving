#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	cin >> x;
	int count = 0;
	if (x%5==0)
	{
		count = x/5;
	}
	else count = x/5+1;
	cout << count << endl;
	return 0;
}