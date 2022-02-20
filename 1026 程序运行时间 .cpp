#include<bits/stdc++.h>
using namespace std;
#define CLK_TCK 100

int C1, C2;
int hh, mm, ss; 
int t, ans;

int main(){
	cin >> C1 >> C2; 
	t = C2 - C1;
	if(t % 100 >= 50){
		ans = t / CLK_TCK + 1;
	}
	else{
		ans = t / CLK_TCK;
	}
	
	hh = ans / 60 / 60;
	mm = ans / 60 % 60;
	ss = ans % 60;
	
	printf("%02d:%02d:%02d", hh, mm, ss);
	
	return 0;
}
