#include<bits/stdc++.h>
using namespace std;

int a[11];

int main(){
	for(int i = 0; i < 10; i++){
		cin >> a[i];	//��¼ÿ�����ֵĸ��� 
	}
	
	for(int i = 1; i < 10; i++){
		if(a[i] != 0){	//�ҵ���һ������������Ϊ���������λ 
			cout << i;	//ֱ�������λ 
			--a[i];		//�ҵ��Ժ��Ǹ����ֵ�ʣ�����ͼ� 1 
			break;		
		}
	}
	
	for(int i = 0; i < 10; i++){	//��ͷ��ʼ�������Ӧ���� 
		for(int j = 0; j < a[i]; j++){
			cout << i;
		}
	} 
	
	return 0;
}
