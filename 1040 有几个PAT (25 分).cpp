#include<bits/stdc++.h>
using namespace std;  //这是一道思维题，这里参考的是柳婼的代码

int main(){
	string s;
	cin >> s;
	int countt = 0, countp = 0, counta = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'T') ++countt;
	}
	unsigned long long sum = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'P') ++countp;
		if(s[i] == 'T') --countt;
		if(s[i] == 'A') sum += (countp * countt);
	}
	cout << sum % 1000000007;
	
	return 0;
}
