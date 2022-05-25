#include<bits/stdc++.h>
using namespace std;
#define int long long  //if((int)sqrt(c) * (int)sqrt(c) == c)的运用

signed main(){
	cin.tie(0)->sync_with_stdio(false);
	int m, n, b, c;
	bool flag = false;
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		int j = i - 1;
		c = i * i * i - j * j * j;   
		if((int)sqrt(c) * (int)sqrt(c) == c)
			for(int k = 1; k <= sqrt(c) / 2; k++){
				if(k * k + (k - 1) * (k - 1) == sqrt(c)){
					b = k;
					flag = true;
					cout << i << " " << b << endl;
					break;
				}
			}
	}
	if(flag == false){
		cout << "No Solution";
	}
	
	return 0;
}
