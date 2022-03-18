#include<bits/stdc++.h>
using namespace std;

const int maxn = 1111;
string s[maxn];

int main(){
	map<string, int> m;
	int M, N, S;
	cin >> M >> N >> S;
	string str;
	for(int i = 1; i <= M; i++){
		cin >> s[i];
	}
	for(int i = S; i <= M; i += N){
		if(m[s[i]] == 0){
			cout << s[i] << endl;
			++m[s[i]];
		}
		else{	//测试点三WA的看这里 
			if(m[s[i + 1]] == 0){	//往下移之后还要记得仔细判断 
				cout << s[i + 1] << endl;
				++m[s[i + 1]];
				++i;	
			}
			
		}
	}
	bool flag = false;
	for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
		if(it->second > 0){
			flag = true;
		}
	}	
	if(!flag){
		cout << "Keep going...";
	}
	return 0;
} 
