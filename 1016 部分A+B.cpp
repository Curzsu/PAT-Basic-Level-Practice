#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	int a, b;
	double ans1 = 0;
	double ans2 = 0;
	double n1 = 10;
	double n2 = 0;
	cin >> s1 >> a >> s2 >> b;
	
	for(int i = 0; i < s1.size(); i++){
		if((s1[i] - '0') == a){
			ans1 += a * pow(n1, n2);
			++n2;
		}
	}
	
	n2 = 0;
	for(int i = 0; i < s2.size(); i++){
		if((s2[i] -'0') == b){
			ans2 += b * pow(n1, n2);
			++n2;
		}
	}
	
	int ans = ans1 + ans2; 
	
	cout << ans;
	
	return 0;
}
