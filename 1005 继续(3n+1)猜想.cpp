#include<bits/stdc++.h>
using namespace std;
 
bool cmp(int a, int b){  
//�Զ��巽��cmp��ʵ��sort�ĴӴ�С���� 
	return a > b;
}	
	
int arr[10000];	//�����鶨�������棬��ֹջ��� 
 
int main(){
	vector<int> v;
	int n,num;
	int flg = 0;  //flg��������Ϊ�ж�����������֤�������ո� 
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> num;
		v.push_back(num);
		while(num != 1){
			if(num % 2 == 0){
			num /= 2;
		}
		else{
			num = (num * 3 + 1) / 2;
		}
            arr[num] = 1;
		}
	}
	
	sort(v.begin(), v.end(), cmp);
		
	for(int i = 0; i < v.size(); i++){
			if(arr[v[i]] != 1){
				if(flg == 1){
					cout << " ";
				}
			cout << v[i];
			flg = 1;
			}
	}
	
	return 0;
}
