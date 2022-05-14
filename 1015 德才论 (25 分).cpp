#include<bits/stdc++.h>
using namespace std;
#define int long long

struct Student{
	int id, defen, caifen;
};

bool cmp(Student a, Student b){
//语法：上面写成bool cmp(struct Student a, struct Student b){ 也可以	
	if(a.defen + a.caifen != b.defen + b.caifen) return a.defen + a.caifen > b.defen + b.caifen;
	if(a.defen != b.defen) return a.defen > b.defen; 
	if(a.id != b.id) return a.id < b.id;
}

signed main(){
	cin.tie(0)->sync_with_stdio(false);
	int N, L, H;
	cin >> N >> L >> H;
	//N考生总数 L录取最低分数线 H优先录取线
	vector<Student> v[5];    //分四类考生一一讨论(注意vector这里是中括号不是圆括号,容量要开够)
	int sum = N;   //记录总数，等下不符合标准的直接踢掉
	Student tmp;   //定义一个Student型的变量以访问结构体中的元素
	while(N--){
		cin >> tmp.id >> tmp.defen >> tmp.caifen;
		if(tmp.caifen < L or tmp.defen < L) --sum;   //抛弃不符合最低标准的考生
		else if(tmp.caifen >= H and tmp.defen >= H) v[1].push_back(tmp);
		else if(tmp.caifen < H and tmp.defen >= H) v[2].push_back(tmp);
		else if(tmp.caifen <= tmp.defen and tmp.defen < H and tmp.caifen < H) v[3].push_back(tmp);
		else v[4].push_back(tmp);	
	}
	cout << sum << endl;
	for(int i = 1; i <= 4; i++)
		sort(v[i].begin(), v[i].end(), cmp);
	for(int i = 1; i <= 4; i++){
		for(int j = 0; j < v[i].size(); j++){
			cout << v[i][j].id << " " << v[i][j].defen << " " << v[i][j].caifen << endl;
		}
	}
	
	return 0;
}
