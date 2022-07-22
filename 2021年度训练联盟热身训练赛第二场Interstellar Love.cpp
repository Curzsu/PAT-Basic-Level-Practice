#include<bits/stdc++.h>  //并查集
#define int long long
using namespace std;

const int maxn = 1234;
int n, s, c, a, b, k = 1;
int father[maxn], cnt[maxn];   
bool vis[maxn];
int res1 = 0, res2 = 0;   //星座数和需要修理数

int findFather(int u){
	//return father[u] == u ? father[u] : father[u] = findFather(father[u]);
	if(father[u] != u) father[u] = findFather(father[u]);
	return father[u];
}

void init(int u){
	res1 = 0, res2 = 0;
	for(int i = 1; i <= u; i++){
		father[i] = i;
		cnt[i] = 1;	
	} 
	memset(vis, false, sizeof vis);
}

void Union(int a, int b){
	father[findFather(a)] = findFather(b);
	cnt[b] += cnt[a];
}

signed main(){
	cin >> n;
	while(n--){
		cin >> s >> c;
		init(s);
		for(int i = 0; i < c; i++){
			cin >> a >> b;
			int pa = findFather(a), pb = findFather(b);
			if(pa != pb){
				Union(pa, pb);
				if(vis[pa] or vis[pb])
					vis[pb] = true;
			}
			else vis[pa] = true;   //标记存在环的集合
		}
		for(int i = 1; i <= s; i++)
			if(father[i] == i and cnt[i] > 1){  //是根结点且集合里有多于1个顶点元素才是星系
				++res1;
				if(vis[i]) ++res2;
			} 
		printf("Night sky #%lld: %lld constellations, of which %lld need to be fixed.\n\n", k++, res1, res2);
	}
	
	return 0;
}
