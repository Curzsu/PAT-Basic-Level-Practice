#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> m;
	m['a'] = 1;m['b'] = 2;m['c'] = 3;m['d'] = 4;m['e'] = 5;
	m['f'] = 6;m['g'] = 7;m['h'] = 8;m['i'] = 9;m['j'] = 10;
	m['k'] = 11;m['l'] = 12;m['m'] = 13;m['n'] = 14;m['o'] = 15;
	m['p'] = 16;m['q'] = 17;m['r'] = 18;m['s'] = 19;m['t'] = 20;
	m['u'] = 21;m['v'] = 22;m['w'] = 23;m['x'] = 24;m['y'] = 25;
	m['z'] = 26;
	string s;
	int sum = 0;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			sum += m[s[i]];
		}
	}
	int cnt0 = 0;
	int cnt1 = 0;
	while(sum){
		if(sum % 2 == 1){
			++cnt1;
		}
		else{
			++cnt0;
		}
		sum /= 2;
	}	
	cout << cnt0 << " " << cnt1;
	
	return 0;
}
