#include<bits/stdc++.h>
using namespace std;

const int N = 15;
int a[N];

int main(){
	int n;
	int sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];	
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			sum += (a[i] * 10 + a[j]);
		}
	}
	cout << sum;
	
	return 0;
}
