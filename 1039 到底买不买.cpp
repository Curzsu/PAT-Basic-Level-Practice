#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	map<char, int> m;
	int cnt = 0;
	for(int i = 0; i < s1.length(); i++){
		++m[s1[i]];			//��ȡÿ���ַ����ֵ�Ƶ�� 
	}	
	for(int i = 0; i < s2.length(); i++){
		if(m[s2[i]] > 0){
			--m[s2[i]];
		}
		else{
			++cnt;	//ȱ�����ּ�1 
		}
	}
	if(cnt > 0){
		cout << "No" << " " << cnt;
	}
	else{
		cout << "Yes" << " " << s1.length() - s2.length();
	}
	
	return 0;
}
