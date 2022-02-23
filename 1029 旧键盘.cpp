#include<bits/stdc++.h>
using namespace std;

const int N = 96;
bool hashtable[N] = {};
bool st[N];

int main(){
	string str1, str2;		
	char c1, c2;
	cin >> str1 >> str2;
	int len1 = str1.length();
	int len2 = str2.length();
	int i, j;
	for(i = 0; i < len1; i++){
		for(j = 0; j < len2; j++){
			c1 = str1[i];
			c2 = str2[j];
			if(c1 >= 'a' and c1 <= 'z') c1 -= 32;  //如果是小写字母，就转换成大写字母 
			if(c2 >= 'a' and c2 <= 'z') c2 -= 32;
			if(c1 == c2) break;
		}
		if(j == len2 and hashtable[c1] == false){
			cout << c1; 
			hashtable[c1] = true;
		}
	}
		
	return 0;
}
