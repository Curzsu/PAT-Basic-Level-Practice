#include<bits/stdc++.h>
using namespace std;

int main(){
	int A, B, D;
	cin >> A >> B >> D;
	stack<int> s;
	
	int sum = A + B;
	
	if(sum == 0){
	cout << "0";
	}
	
	while(sum){
		s.push(sum % D);
		sum /= D;
	}
	
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
	
return 0;	
}
