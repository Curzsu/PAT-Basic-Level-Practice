#include<bits/stdc++.h>
using namespace std;

int main(){
stack<string> s;
string word;

while(cin >> word){
//���while���õ�"cin�����س���ո������ȡ"��һ�ص� 
//ÿ����һ�����ʣ�����ѹ��ջ 
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
