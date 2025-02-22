#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int result =0;
	int A[3];
	while(n--)
	{
		int count =0;
		for(int i=0; i<3; i++)
		{
			cin >> A[i];
			if(A[i] == 1)
			{
				count ++;
			}

		}
			if (count > 1)
			{
				result ++;
			}
	}	
	
	cout << result<< endl;

	return 0;
}