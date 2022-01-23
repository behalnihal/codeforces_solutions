#include<bits/stdc++.h>
using namespace std;

char vow[6] = {'a', 'e', 'i', 'o', 'y', 'u'};

bool is_vowel(char ch){
	for(char &v : vow){
		if( ch == v) return true;
	}
	return false;
}


int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin>>s;

	for(auto &c : s){
		c = tolower(c);
		if(!is_vowel(c)) cout << "." << c;
	}

	return 0;
}
