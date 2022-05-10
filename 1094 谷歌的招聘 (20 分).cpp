#include<bits/stdc++.h>
using namespace std;

bool isPrime(int u){
	if(u <= 1) return false;    //别忘了这一句！！！
	for(int k = 2; k <= u / k; k++)
		if(u % k == 0) return false;
	return true;
}

int main(){
	bool f = false;
	int L, K, num = 0;
	cin >> L >> K;
	string N;
	cin >> N;
	int j;
	for(int i = 0; i <= L - K; i++){   //小于等于L-K是一个测试点
		for(j = 0; j < K; j++){
			num = ((N[i + j] - '0') + num * 10);
	//		cout << N[i + j] - '0' << "  " << " 66666"<<endl << endl;
	//		cout << num <<endl;
			
		}
		if(isPrime(num)){
			cout << setfill('0')  << setw(K) << num << endl;  //注意输出的是字符串
			//所以只输出num，不会输出前导零
			f = true;
			num = 0;
			break;
		}
		else{
			num = 0;
			continue;	
		} 
	}
	if(f == false) cout << "404";
	
	return 0;
}
//以下是柳婼的代码，写法更简洁：
/*
	#include <iostream>
#include <string>
using namespace std;
bool isPrime(int n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int l, k;
    string s;
    cin >> l >> k >> s;
    for (int i = 0; i <= l - k; i++) {
        string t = s.substr(i, k);
        int num = stoi(t);
        if (isPrime(num)) {
            cout << t;
            return 0;
        }
    }
    cout << "404\n";
    return 0;
}
*/
