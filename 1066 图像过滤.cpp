#include<bits/stdc++.h>
using namespace std;
//�����ʽ����ܶ���
//Ҫע��ÿ�����һ�����ֲ����������ո� 
//���Զ����һ�У������ܶ�������У����������ֱ��0�� 
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
