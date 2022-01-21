#include<bits/stdc++.h>
using namespace std;

int main(){
stack<string> s;
string word;

while(cin >> word){
//这句while，用到"cin遇到回车或空格结束读取"这一特点 
//每输入一个单词，将其压入栈 
	s.push(word);
}

cout << s.top();
s.pop();

while(!s.empty()){
	cout << " " << s.top(); 
	s.pop();
}
	
	return 0;
} 
