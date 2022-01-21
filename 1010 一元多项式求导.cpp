#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a, b;
	int flg = 0;
 
	while(cin >> a >> b){
		
		if(b != 0){
		if(flg == 1){
			cout << " ";
		}
		
		cout << a * b << " " << b - 1;	
		flg = 1;
		
		}else if(flg == 0 ){ 
		//flg为零，说明输入的是由指数为零的系数组成的多项式 
		//那么求导以后整个式子等于零，就是零多项式
		//根据题目要求，输出“0 0” 
			cout << "0 0";
			}
			
	} 	
	
    return 0;
}
