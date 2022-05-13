#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 11111;
int N, K, searchID;
int Rank[maxn];
bool hashtable[maxn];

bool isPrime(int num){
	if(num <= 1) return false;
	for(int k = 2; k <= num / k; k++)
		if(num % k == 0) return false;
	return true;
}

void transFormat(int u){
	cout << setfill('0') << setw(4) << u;
}

void check(int u){
	for(int i = 1; i <= N; i++){
		if(u == Rank[i]){
			if(i == 1 and !hashtable[u]){ transFormat(u); cout << ": " << "Mystery Award" << endl; hashtable[u] = true; return;}
			else if(isPrime(i) and !hashtable[u]) {transFormat(u); cout << ": " << "Minion" << endl; hashtable[u] = true; return;}
			else if(hashtable[u]){ transFormat(u); cout << ": " << "Checked" << endl; return;}
			else {transFormat(u); cout << ": " << "Chocolate" << endl; hashtable[u] = true; return;}
		}
	}
	transFormat(u); cout << ": " << "Are you kidding?" << endl;
}

signed main(){
	cin.tie(0)->sync_with_stdio(false);
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> Rank[i];
	}
	cin >> K;
	for(int i = 1; i <= K ; i++){
		cin >> searchID;
		check(searchID);
	}
	
	return 0;
}
