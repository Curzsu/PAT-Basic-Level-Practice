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
		//flgΪ�㣬˵�����������ָ��Ϊ���ϵ����ɵĶ���ʽ 
		//��ô���Ժ�����ʽ�ӵ����㣬���������ʽ
		//������ĿҪ�������0 0�� 
			cout << "0 0";
			}
			
	} 	
	
    return 0;
}
