#include<bits/stdc++.h> //
using namespace std;

int main(){
	int cnt = 0;
	int n;
	cin >> n;
	
	while(n != 1)
	{
		
		if(n % 2 == 0){
			n /= 2;
			++cnt;
		}
		else{
			n = ((3 * n) + 1) / 2;
			++cnt;
		}
		
	}
	
	cout << cnt;
	
	return 0;
} 
