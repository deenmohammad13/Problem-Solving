#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	set<char> distinct_chars(s.begin(), s.end()); // set<char> automatically remove distinct char and count unique
	if(distinct_chars.size()%2 ==1)
	cout << "IGNORE HIM!"<< endl;
	 else 
	 cout << "CHAT WITH HER!"<< endl;

	 return 0;
}