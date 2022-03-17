#include<bits/stdc++.h>
using namespace std;
//这题格式输出很恶心
//要注意每行最后一个数字不能输出多余空格！ 
//可以多输出一行，但不能多输出两行，多输出两行直接0分 
const int maxn = 555;
int g[maxn][maxn];

int main(){
	int M, N, A, B, t;
	cin >> M >> N >> A >> B >> t;
	for(int i = 1; i <= M; i++)
		for(int j = 1; j <= N; j++){
			cin >> g[i][j]; 
			if(g[i][j] >= A and g[i][j] <= B){
				g[i][j] = t;
			}
		}
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			if(j != N){
				printf("%03d ", g[i][j]);
			}
			else{
				printf("%03d\n", g[i][j]);
			}
		}
	}
	return 0;
}
