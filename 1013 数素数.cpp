#include<bits/stdc++.h>
using namespace std;

bool isPrime(int u){	//判断素数 
	
	for(int i = 2; i <= sqrt(u); i++){
		if(u % i == 0){
			return false;	
		}
	}
	return true;
}

int main(){
	int M, N;
	int num = 2;		//往容器中加入数字 
	int tmp = 0;        //换行用 ,加空格用 
	int cnt = 0;		
	vector<int> v;
	cin >> M >> N;

	while(cnt < N){
		if(isPrime(num)){
			++cnt;
		}
		if(cnt >= M && isPrime(num)){
			v.push_back(num); 
		}		
		++num;
	}
	
	for(int i = 0; i < v.size(); i++){
		++tmp;
		if(tmp % 10 != 1) cout << " ";
		cout << v[i];
		if(tmp % 10 == 0) puts("");
	}
	
	return 0;
}
