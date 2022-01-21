#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum;
	int n = 1;
	cin >> sum;
	long long A, B, C;
	for(int i = 0; i < sum ; i++){
	cin >> A >> B >> C;		
		if(A + B > C){
		cout << "Case #" << n << ": true" << endl;
		++n;
		}
		else {
		cout << "Case #" << n << ": false" << endl;
		++n;
		}
	}
	return 0;
} 
