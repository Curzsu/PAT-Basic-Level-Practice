#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, a, b;
	cin >> N;
	vector<int> couple(100000, -1);   //初始化容量100000，每个位子上的数是-1
	for(int i = 0 ; i < N; i++){
		scanf("%d %d",&a, &b);
		couple[a] = b;
		couple[b] = a;
	}
	int M;
	cin >> M;
	vector<int> search(M), isExist(111111);
	for(int i = 0; i < M; i++){
		cin >> search[i];
		if(couple[search[i]] != -1){   //如果找到的这个人已经有伴侣了
			isExist[couple[search[i]]] = 1;   //它的另一半标成1
		}
	}
	set<int> s;
	for(int i = 0; i < M; i++){
		if(!isExist[search[i]]){ //单身狗都没被标记
			s.insert(search[i]);    //把单身狗关在set里
			//为什么关在set里？因为set会自动排序，题目要求结果是排序的。
		}
	}
	cout << s.size() << endl;
	bool f = false;
	for(auto it = s.begin(); it != s.end(); it++){
		if(f == true) cout << " ";
		f = true;
		printf("%05d", *it);
	}
	
	return 0;
}
