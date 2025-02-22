#include <iostream>
using namespace std;


// Iterative approoach
// int sumOfDigits(int n)
// {
// 	int sum = 0;
// 	while (n>0)
// 	{
// 		int rem = n%10;
// 		sum = sum + rem;
// 		n = n/10;
// 	}
// 	return sum;
// }


// Recursive Approach
// int sumOfDigits(int n)
// {
// 	if (n==0)
// 		return 0;
// 	return (n%10)+ sumOfDigits(n/10);
// }

int sumOfDigits(string s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int digit = s[i] - '0';

	sum = sum + digit;
	}
	return sum;	

}

// int main()
// {
// 	int n = 12345;
// 	int result= sumOfDigits(n);
// 	cout << "Sum of the digit " << n << " = "<< result << endl;
// 	return 0;
// }

int main()
{
	string s = "123434556778";
	int result = sumOfDigits(s);
	cout << "Sum of the digit " << s <<" = "<< result<< endl;
}