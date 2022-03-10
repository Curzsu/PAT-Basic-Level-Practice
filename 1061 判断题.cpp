#include<bits/stdc++.h>
using namespace std;

int N, M;
int s[101];
int trueans[101];

int main(){
	cin >> N >> M;
	int answer;
	int sum = 0;
	for(int i = 0; i < M; i++){
		cin >> s[i];
	}
	for(int i = 0; i < M; i++){
		cin >> trueans[i];
	}
	for(int i = 0; i < N; i++){
		for(int i = 0; i < M; i++){
			cin >> answer;
			if(answer == trueans[i]){
			sum += s[i];
			} 				
		}
		cout << sum << endl;
		sum = 0;
	}
	
	return 0;
}
