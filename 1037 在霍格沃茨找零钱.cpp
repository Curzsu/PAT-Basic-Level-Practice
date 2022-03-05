#include<bits/stdc++.h>
using namespace std;

int main(){
	int g1, s1, k1, g2, s2, k2;
	scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
	int P = g1 * 17 * 29 + s1 * 29 + k1;	//应付的钱 
	int A = g2 * 17 * 29 + s2 * 29 + k2;	//实付的钱 
	int extra = A - P;
	if(extra < 0) cout << "-";
	printf("%d.%d.%d", abs(extra / 17 / 29), abs(extra / 29 % 17), abs(extra % 29));
	
	return 0;
}
