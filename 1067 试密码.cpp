#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt = 0;
	string str, trystr;
	cin >> str >> n;
	getchar();	//吸收回车符 
	while(1){	//不能写成while(cin>>trystr)，因为会读入回车 
		getline(cin, trystr);
		if(trystr == "#") break;
		++cnt;
		if((trystr != str) and (cnt <= n)){
			cout << "Wrong password: " << trystr << endl;	
			if(cnt == n){
				cout << "Account locked";
				break;
			}
		}
		else if((trystr == str) and (cnt <= n)){
			cout << "Welcome in";
			break;
		}
	}
	
	return 0;
}
