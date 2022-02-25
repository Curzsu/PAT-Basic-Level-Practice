#include<bits/stdc++.h>
using namespace std;

char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int we[20] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; 
char str[20];

int main(){
	int N, j;
	bool flg = true;
	cin >> N;
	for(int i = 0; i < N; i++){
		int sum = 0;
		cin >> str;
		for(j = 0; j < 17; j++){
			sum += (str[j]-'0') * we[j];
			if(!(str[j] >= '0' and str[j] <= '9')){  //不是数字的话 
				break;
			}
		}
		if(j < 17){
			flg = false;
			cout << str << endl;
		}
		else if(M[sum % 11]  != str[17]){
				flg = false; 
				cout << str << endl;
		}
	}
	if(flg){
		cout << "All passed" << endl;
	}
	return 0;
}
