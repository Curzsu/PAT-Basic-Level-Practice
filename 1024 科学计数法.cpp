#include<bits/stdc++.h>
using namespace std;

int main() {

	string input;
	cin >> input;
	if(input[0] == '-') cout << "-";
	int pos;	//E的位置 
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'E') {
			pos = i;
		}
	}

	int exp = 0;		//存放指数
	//注意，exp要有初始值，不然会出错！！！
	//不能直接 int exp; 
	for (int i = pos + 2; i < input.length(); i++) {
		exp = exp * 10 + (input[i] - '0');
	}

	//分正数和负数进行讨论

	if (input[pos + 1] == '-') {	//如果指数是负数
		cout << "0.";
		for (int i = 0; i < exp - 1; i++) {
			cout << "0";
		}
		cout << input[1]; //分两次输出，是为了不输出小数点和绝对值符号
		for (int i = 3; i < pos; i++) {
			cout << input[i];
		}
	}else {	//如果是正数
		for (int i = 1; i < pos; i++) {
			if (input[i] == '.') continue; //略过小数点
			cout << input[i];
			if ( i == exp + 2 && pos - 3 != exp) {
				/*i == exp + 2意思是
				小数点应添加在位于 exp+2 位置的数字的后面 */ 
				/*原小数点和 E之间数字个数pos-3不等于指数exp
				因为等于的话就不用输出小数点了*/ 
				cout << ".";
			}
		}
		//如果指数exp较大，输出多余的 0
	for (int i = 0; i < exp - (pos - 3); i++) {
		cout << "0";
	}
		}
	return 0;
}
