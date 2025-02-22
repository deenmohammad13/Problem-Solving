#include<iostream>
using namespace std;

void checkPrime(int n)
{
	int count = 0;
	if (n<=1)
	{
		cout << n << " is not Prime Number";
	}
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count > 0)
	{
		cout << n << " is not Prime Number";
	}
	else
		cout << n << " is Prime Number";
}

int main()
{
	int n;
	cout <<"Enter any Number : ";
	cin >> n;
	checkPrime(n);
	return 0;
}