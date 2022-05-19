#include<bits/stdc++.h>   //
using namespace std;
int main(){
	string s1, s2, s3;
	char t[10]; //用于将0~9转化成字符串 
	int n;
	int temp3;	//B 
	int temp2;	//S
	int temp1;	//数字 
	cin >> n;
	
		temp3 = n % 10;  //算出个位 
		n /= 10;
		for(int i = 1; i <= temp3; i++){
		sprintf(t,"%d",i); //数字转化成字符 
		s3 += (string)t;  //将字符相加成字符串 
	}
	
	temp2 = n % 10; //算出十位 
	n /= 10;     
	for(int i = 1; i <= temp2; i++){
		s2 += "S"; 
	}
	
	temp1 = n % 10; //算出百位 
	for(int i = 1; i <= temp1; i++){
		s1 += "B"; 
	}
	
	cout << s1 << s2 << s3;
	return 0;
}
