#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt = 0;
	string str, trystr;
	cin >> str >> n;
	getchar();	//���ջس��� 
	while(1){	//����д��while(cin>>trystr)����Ϊ�����س� 
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
