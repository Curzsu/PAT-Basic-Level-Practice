#include<bits/stdc++.h>
using namespace std;
//测试点2没过，题目问题，这里掌握解题思想就行了

int main(){
	int N;
	cin >> N;
	double tmp, res = 0;
	for(int i = 1; i <= N; i++){
		cin >> tmp;
		res += (i * tmp * 1.0 * (N - i + 1));   //这句话很巧妙，需多加复习
	}
	cout << fixed << setprecision(2) << res;
	
	return 0;
}
