#include<bits/stdc++.h>
using namespace std;

const int maxn = 10006;
int a[maxn] = {};

int main(){
	int N;
	cin >> N;
	int teamNum, teammateNum, score;
	for(int i = 0; i < N; i++){
		scanf("%d-%d %d", &teamNum, &teammateNum, &score);
		a[teamNum] += score;
	}
	int maxnum = 0;
	int maxteam;
	for(int i = 0; i < maxn; i++){
		if(a[i] > maxnum){
			maxnum = a[i];
			maxteam = i;
		}
	}
	cout << maxteam << " " << a[maxteam];
	
	return 0;
}
