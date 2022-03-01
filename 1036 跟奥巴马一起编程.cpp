#include<bits/stdc++.h>
using namespace std;


int main(){
	double N;
	int temp;	//保存四舍五入后的变量 
	char ch;
	cin >> N >> ch;
	for(int i = 0; i< N; i++){
		cout << ch;
	}
	puts("");
	temp = (N * 0.5 + 0.5) * 10 / 10;
	for(int i = 1; i <= temp - 2; i++){
		cout << ch;
		for(int j = 0; j < N - 2; j++){
			cout << " "; 
		}
		cout << ch;
		cout << endl;
	}
	for(int i = 0; i< N; i++){
		cout << ch;
	}
	
	return 0;
}
