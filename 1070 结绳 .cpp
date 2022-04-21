#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[111111];     //出现段错误的原因很可能是数组下标开的太小了
//但还是不太懂，题目数据范围10的4次方，开容量是5555却会发生段错误，不知为何

signed main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	sort(a, a + N);
	int res = a[0];
	for(int i = 1; i < N; i++){
		res = (res + a[i]) / 2;
	}
	cout << res;
	
	return 0;
}
