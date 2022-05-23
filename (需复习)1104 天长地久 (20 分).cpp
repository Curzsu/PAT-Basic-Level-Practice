#include<bits/stdc++.h>
using namespace std;
#define int long long 

bool hashtable[111], st[111];

int gcd(int a, int b){
	return b ? gcd(b, a % b) : a; 
}

void getPrime(){
	for(int i = 2; i < 111; i++){    //埃氏筛
		if(!st[i]){
			hashtable[i] = true;
			for(int j = i; j < 111; j += i) st[j] = true;
		}
	}
}

int getSum(int u){
	int sum = 0;
	while(u){
		sum += u % 10;
		u /= 10;
	}
	return sum;
}

/*bool isPrime(int u){
	if(u < 2) return false;
	for(int i = 2; i <= u / i; i++)
		if(u % i == 0) return false;
	return true;
}*/

signed main(){
	cin.tie(0)->sync_with_stdio(false);
	getPrime();
	int N, K, m, cnt = 1, n, t, res;
	cin >> N;
	while(N--){
		cin >> K >> m;
		bool f = false;
		int endNum = pow(10, K), startNum = pow(10, K - 1);
		vector<int> v[111];     //因为题目要求对n进行递增输出，故用二维vector来存
		for(int i = startNum + 99; i <= endNum; i += 100){ 
			//上面这句剪枝非常妙，观察结果样例，并自己举例可知，最后两位数必是99。
			if(getSum(i) == m){
				n = getSum(i + 1); 
				t = gcd(n ,m);
				if(t > 2 and hashtable[t]){
					v[cnt].push_back(i);
					res = n;
				} 
			}
		}
			int t = cnt;
			cout << "Case " << t << endl;
			for(int i = 1; i < 90; i++){
				for(int j = 0; j < v[cnt].size(); j++){
					cout << res << " " << v[i][j] << endl;
					f = true;
				}
			}
			++cnt;
		if(f == false){
			cout << "Case " << cnt++ << endl;
			cout << "No Solution" << endl;
		}
	}
	
	return 0;
}
