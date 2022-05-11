#include<bits/stdc++.h>
using namespace std;
//思维题，找规律
int a[111111];

int main(){
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> a[i];
	}
	sort(a + 1, a + N + 1, greater<int>());
	int i = 1, cnt = 0;
	while(i < a[i] and cnt <= N){    //题目条件不能漏！题目说爱丁顿数小于等于N
		++cnt;
		++i;
	}
	cout << cnt;
	
	return 0;
}
