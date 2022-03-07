#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> m;
	string s;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.length(); i++){
		if((s[i] >= 'a' and s[i] <= 'z')){
			++m[s[i]];
		}
	}
	int maxcnt = 0;
	for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
		maxcnt = max(maxcnt, it->second);
	}
	for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
		if(it->second == maxcnt){
			cout << it->first << " " << maxcnt;
			break;
		}
	}
	
	return 0;
}
