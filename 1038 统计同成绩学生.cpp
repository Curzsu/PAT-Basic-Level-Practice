#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> m;
	int N, num;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> num;
		++m[num];
	}
	int K;
	cin >> K;
	bool f = false;
	for(int i = 0; i < K; i++){
		cin >> num;
		if(f == true){
			cout << " ";
		}
		f = true;
		cout << m[num];
	}
	
	return 0;
}
