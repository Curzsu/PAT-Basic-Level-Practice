#include<bits/stdc++.h>
using namespace std;

int num[5];

bool cmp(int a, int b){
	return a > b;	//½µĞò 
}

void toArray(int N, int num[]){
	for(int i = 3; i >= 0; i--){
		num[i] = N % 10;
		N /= 10;
	}	
}

int toNum(int num[]){
	int sum = 0;
	for(int i = 0; i < 4; i++){
		sum = sum * 10 + num[i];
	}
	return sum;
}

int main(){
	int N;	
	cin >> N;
	int num1 = 0;
	int num2 = 0;
	while(1){
	toArray(N, num);
	sort(num , num + 4, cmp);
	num1 = toNum(num);
	sort(num, num + 4);
	num2 = toNum(num);
	cout << setw(4) << setfill('0') << num1;
	cout << " - ";
	cout << setw(4) << setfill('0') << num2;
	cout << " = "; 
	N = num1 - num2;
	cout << setw(4) << setfill('0') << N << endl;
	if(N == 6174 || N == 0) break;
	}

	return 0;
}
