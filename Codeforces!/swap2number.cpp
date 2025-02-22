#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout << "Enter two number : ";
	cin >> a >> b;
	cout << "Before Swapping"<< endl;
	cout << "a = "<< a << ", b = "<<b<<endl;

	temp=a;
	a=b;
	b=temp;

	cout << "\nAfter Swapping"<< endl;
	cout << "a = "<< a << ", b = "<< b<< endl;

	return 0;
}