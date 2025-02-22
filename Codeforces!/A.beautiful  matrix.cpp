#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int x,y,sum=0;
	int arr[5][5];
	for(int i =0; i<5;i++)
	{
		for(int j =0; j<5;j++)
		{
			cin >> arr[i][j];
			if (arr[i][j]==1)
				{
					
					x = abs(2-i);
					y = abs(2-j);
					
				}
		}

		
	}
		sum= x+y;
		cout << sum;

		return 0;
}