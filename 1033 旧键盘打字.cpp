#include<bits/stdc++.h>
using namespace std;

const int N = 100006;
bool hashtable[N] = {};

int main(){
	string str1, str2; 
	char temp;
	//cin >> str1 >> str2;  �������д������Ϊcin���Զ�����ո�
	getline(cin, str1);
	getline(cin, str2); 
	for(int i = 0; i < str1.length(); i++){
		if(str1[i] >= 'A' and str1[i] <= 'Z'){	//����Ǵ�д��ĸ 
			temp = tolower(str1[i]);	//ת��ΪСд��ĸ 
			hashtable[temp] = true;	
		}
		else{
			hashtable[str1[i]] = true;	//���ļ�λ���Ϊtrue 
		} 	
	}
	for(int i = 0; i < str2.length(); i++){
		char temp2;
		temp2 = tolower(str2[i]);	//ȫת����Сд��ĸ����������ʱ�����Ա�� 
		if(str2[i] >= 'A' and str2[i] <= 'Z'){	//����Ǵ�д��ĸ 
			 if(!hashtable['+'] and !hashtable[temp2]){	//�ϵ���û�����Ҽ�λҲû�� 
			 	cout << str2[i];	//ԭ�ⲻ����� 
			 }
			 else{
			 	continue;	//������� 
			 }
		}
		else if(!hashtable[temp2]){		//��ǵļ�λ���ǻ��� 
			cout << str2[i];		//ԭ�ⲻ����� 
		}
	}
		cout << endl; 
return 0;	
}
