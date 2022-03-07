#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<char, int> m;
	for(int i = 0; i < s.length(); i++){
		++m[s[i]];
	}
	
	while(m['P'] > 0 or m['A'] > 0 or m['T'] > 0 or m['e'] > 0 or m['s'] > 0 or
	 m['t'] > 0){
	 	if(m['P']-- > 0) cout << "P";
	 	if(m['A']-- > 0) cout << "A";
	 	if(m['T']-- > 0) cout << "T";
	 	if(m['e']-- > 0) cout << "e";
	 	if(m['s']-- > 0) cout << "s";
	 	if(m['t']-- > 0) cout << "t";
	 }
	
	return 0;
}
