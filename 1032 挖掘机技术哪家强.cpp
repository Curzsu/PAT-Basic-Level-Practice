#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100006;
int a[MAXN] = {};

int main(){
	int N;
	cin >> N;
	int id, value;
	for(int i = 0; i < N; i++){
		cin >> id >> value;
		a[id] += value;
	}	
	int maxNum = 0;
	for(int i = 1; i <= N; i++){
		maxNum = max(a[i], maxNum);
	} 
	for(int i = 1; i <= N; i++){
		if(a[i] == maxNum){
			cout << i << " " << maxNum;
		}
	}
	return 0;
}
