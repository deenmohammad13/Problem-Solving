#include<iostream>
using namespace std;

int main()
{
	for(int i =1; i<=5; i++)
	{
		float cel, far;
	cout << "Enter the celcius temperature : ";
	cin >> cel;
	far = ((9*cel)/5)+32;

	cout << "Celcius temperature = " << cel<< endl;
	cout << "Fahrenheit temperature = "<< far << endl;
	}
	
	return 0;
}