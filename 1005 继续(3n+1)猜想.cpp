#include<bits/stdc++.h>
using namespace std;
 
bool cmp(int a, int b){  
//自定义方法cmp，实现sort的从大到小排序 
	return a > b;
}	
	
int arr[10000];	//大数组定义在外面，防止栈溢出 
 
int main(){
	vector<int> v;
	int n,num;
	int flg = 0;  //flg在最后会作为判断条件，来保证最后不输出空格 
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
