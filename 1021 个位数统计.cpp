#include<bits/stdc++.h>
using namespace std;

int main(){
	string N;
	cin >> N;
	vector<int> v(9);
	int num;
	
	for(int i = 0; i < N.length(); i++){
		num = N[i] - '0';	
		++v[num];
	}
		
	for(int i = 0; i < 10; i++){
		if(v[i] != 0){
			cout << i << ":" << v[i] << endl;
		}
	}
	
	return 0;
}
