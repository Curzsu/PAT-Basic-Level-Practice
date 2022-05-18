#include<bits/stdc++.h>
using namespace std;

bool judge_palindromic(string u){
	string str(u.rbegin(), u.rend());
	if(str == u) return true;
	return false;
}

string add(string sa, string sb){
	string tmp = "";
	int t = 0;
	for(int i = 0; i < sa.length(); i++){
		t = (sa[i] - '0') + (sb[i] - '0') + t;
		tmp.append(to_string(t % 10));
		t /= 10;
	}
	if(t > 0) tmp.append(to_string(t));
	string tt(tmp.rbegin(), tmp.rend());
	return tt;
}

int main(){
	string s;
	int cnt = 0;
	cin >> s;
	if(judge_palindromic(s)){    //初始也要特判(当然，这一般没拿满分的时候才想得到QAQ)
		cout << s << " is a palindromic number.";
		return 0;
	}
	while(1){
		++cnt;
		string tmpstr(s.rbegin(), s.rend());
		string res = add(s, tmpstr);
		cout << s << " + " << tmpstr << " = " << res << endl;
		s = res;
		if(judge_palindromic(s) == true){
			cout << s << " is a palindromic number.";
			return 0;
		}
		if(cnt == 10) break;
	}
	cout << "Not found in 10 iterations.";
	
	return 0;
}
