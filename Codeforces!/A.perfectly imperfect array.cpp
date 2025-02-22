#include <bits/stdc++.h>
#include <math.h>
using namespace  std;
int main()
{
	int t;
	cin >> t;
	while(t>0)
	{
		int a;
		cin >> a;
		int arr[a];
		for(int i =0; i < a;i++)
		{
			cin >> arr[i];
		}
		int count =0;
		for(int i =0; i < a;i++)
		{
			
			int ans =arr[i];
			int q = sqrt(ans);
			if (q*q != ans)
				count =1;
		}
		if (count == 1)
		{
			cout << "YES"<< endl;
		}
		else cout << "NO" << endl;
		t--;

	}
	return 0;
}