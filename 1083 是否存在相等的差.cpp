#include<bits/stdc++.h>	//主要是map如何实现自定义排序，具体可参考：https://blog.csdn.net/chengqiuming/article/details/89816566
using namespace std;

int num[234567];

int main(){
	map<int, int, greater<int> > mp;	//使得按键从大到小排序(仅适用于键)
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> num[i];
		num[i] = abs(num[i] - i);
		++mp[num[i]];
	}
	for(map<int, int> :: iterator it = mp.begin(); it != mp.end(); it++){
		if(it->second > 1)
			cout << it->first << " " << it->second << "\n";
	}
	
	return 0;
}
