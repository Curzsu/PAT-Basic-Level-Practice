#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2, s3;
	char t[10]; //���ڽ�0~9ת�����ַ��� 
	int n;
	int temp3;	//B 
	int temp2;	//S
	int temp1;	//���� 
	cin >> n;
	
		temp3 = n % 10;  //�����λ 
		n /= 10;
		for(int i = 1; i <= temp3; i++){
		sprintf(t,"%d",i); //����ת�����ַ� 
		s3 += (string)t;  //���ַ���ӳ��ַ��� 
	}
	
	temp2 = n % 10; //���ʮλ 
	n /= 10;     
	for(int i = 1; i <= temp2; i++){
		s2 += "S"; 
	}
	
	temp1 = n % 10; //�����λ 
	for(int i = 1; i <= temp1; i++){
		s1 += "B"; 
	}
	
	cout << s1 << s2 << s3;
	return 0;
}
