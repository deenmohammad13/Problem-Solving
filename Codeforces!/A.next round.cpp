#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,count=0;
	cin >>n >>k;
	vector<int> arr(n);
	for(int i =0; i<n;i++)
	{
		cin >> arr[i];
	}

	if(k>n)
	{
		cout<<0<<endl;
		return 0;
	}

	for(int i =0; i<n; i++)
	{
		if(arr[i]>0 && arr[i]>=arr[k-1])
		{
			count++;
		}
	}
	cout << count << endl;

	return 0;
}