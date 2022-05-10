#include<bits/stdc++.h>
using namespace std;    //值得思考的一道模拟

int main(){
	int N, M, a, b;
	cin >> N >> M;
	map<int, vector<int> >m;
	for(int i = 0; i < N; i++){
		cin >> a >> b;
		m[a].push_back(b);
		m[b].push_back(a);
	}
	while(M--){
		int marked[111111] = {0}, K;   //数组放循环体内，确保更新
		cin >> K;
		vector<int> searched(K);
		for(int i = 0; i < K; i++){
			cin >> searched[i];
			marked[searched[i]] = 1;    //打上标记
		}
		bool flag = true;
		for(int i = 0; i < searched.size(); i++){
			for(int j = 0; j < m[searched[i]].size(); j++){
				if(marked[m[searched[i]][j]] == 1){  //这句话稍复杂，好好理解下
//如果输入的值，它map中之前pushback的对应元素也正好也被marked标记过，说明这俩危险品存在于同一个地方
//所以就是危险
					flag = false;
					break;
				}  
			}
		}
		if(flag == false) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	
	return 0;
}
