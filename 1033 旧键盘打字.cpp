#include<bits/stdc++.h>
using namespace std;

const int N = 100006;
bool hashtable[N] = {};

int main(){
	string str1, str2; 
	char temp;
	//cin >> str1 >> str2;  错误读入写法，因为cin会自动读入空格
	getline(cin, str1);
	getline(cin, str2); 
	for(int i = 0; i < str1.length(); i++){
		if(str1[i] >= 'A' and str1[i] <= 'Z'){	//如果是大写字母 
			temp = tolower(str1[i]);	//转换为小写字母 
			hashtable[temp] = true;	
		}
		else{
			hashtable[str1[i]] = true;	//坏的键位标记为true 
		} 	
	}
	for(int i = 0; i < str2.length(); i++){
		char temp2;
		temp2 = tolower(str2[i]);	//全转换成小写字母，保存在临时变量以标记 
		if(str2[i] >= 'A' and str2[i] <= 'Z'){	//如果是大写字母 
			 if(!hashtable['+'] and !hashtable[temp2]){	//上档键没坏并且键位也没坏 
			 	cout << str2[i];	//原封不动输出 
			 }
			 else{
			 	continue;	//否则不输出 
			 }
		}
		else if(!hashtable[temp2]){		//标记的键位不是坏的 
			cout << str2[i];		//原封不动输出 
		}
	}
		cout << endl; 
return 0;	
}
