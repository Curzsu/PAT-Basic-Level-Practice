#include<bits/stdc++.h>
using namespace std;

int main() {

	string input;
	cin >> input;
	if(input[0] == '-') cout << "-";
	int pos;	//E��λ�� 
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'E') {
			pos = i;
		}
	}

	int exp = 0;		//���ָ��
	//ע�⣬expҪ�г�ʼֵ����Ȼ���������
	//����ֱ�� int exp; 
	for (int i = pos + 2; i < input.length(); i++) {
		exp = exp * 10 + (input[i] - '0');
	}

	//�������͸�����������

	if (input[pos + 1] == '-') {	//���ָ���Ǹ���
		cout << "0.";
		for (int i = 0; i < exp - 1; i++) {
			cout << "0";
		}
		cout << input[1]; //�������������Ϊ�˲����С����;���ֵ����
		for (int i = 3; i < pos; i++) {
			cout << input[i];
		}
	}else {	//���������
		for (int i = 1; i < pos; i++) {
			if (input[i] == '.') continue; //�Թ�С����
			cout << input[i];
			if ( i == exp + 2 && pos - 3 != exp) {
				/*i == exp + 2��˼��
				С����Ӧ�����λ�� exp+2 λ�õ����ֵĺ��� */ 
				/*ԭС����� E֮�����ָ���pos-3������ָ��exp
				��Ϊ���ڵĻ��Ͳ������С������*/ 
				cout << ".";
			}
		}
		//���ָ��exp�ϴ��������� 0
	for (int i = 0; i < exp - (pos - 3); i++) {
		cout << "0";
	}
		}
	return 0;
}
