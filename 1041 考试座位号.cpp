#include<bits/stdc++.h>
using namespace std;

const int MAXV = 1006;
int N, M;
int k;	//试机号 
string admitnum;	//准考证号
string seatnum;	//座位号 
int q;	//需要查询的试机号 
string str[MAXV][MAXV];

int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> admitnum >> k >> seatnum;
		str[k][0] = admitnum;
		str[k][1] = seatnum;
	}
	cin >> M;
	while(M--){
		cin >> q;
		cout << str[q][0] << " " << str[q][1] << endl;
	}
	
	return 0;
}
