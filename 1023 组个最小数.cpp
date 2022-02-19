#include<bits/stdc++.h>
using namespace std;

int a[11];

int main(){
	for(int i = 0; i < 10; i++){
		cin >> a[i];	//记录每个数字的个数 
	}
	
	for(int i = 1; i < 10; i++){
		if(a[i] != 0){	//找到第一个数字数量不为零的数作首位 
			cout << i;	//直接输出首位 
			--a[i];		//找到以后，那个数字的剩余量就减 1 
			break;		
		}
	}
	
	for(int i = 0; i < 10; i++){	//重头开始并输出对应数字 
		for(int j = 0; j < a[i]; j++){
			cout << i;
		}
	} 
	
	return 0;
}
