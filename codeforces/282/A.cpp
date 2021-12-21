#include<iostream>
using namespace std;

int main()
{
	int t,x=0;
	string s;
	cin>>t;
	
	while(t--)
	{
		cin>>s;
		s[0]=='+' || s[2] =='+' ? x++ : x--;
	}
	cout << x<<'\n';
	return 0;
}