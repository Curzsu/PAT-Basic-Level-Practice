#include<bits/stdc++.h>
using namespace std;

bool vis[1234567];

int main(){
	string A, B;
	getline(cin, A);
	//cin.ignore();  不能加这行，一加就WA
	getline(cin, B);
	for(int i = 0; i < A.length(); i++){
		if(!vis[A[i]]) cout << A[i];
		vis[A[i]] = true;
	}
	for(int i = 0; i < B.length(); i++){
		if(!vis[B[i]]) cout << B[i];
		vis[B[i]] = true;
	}
	
	return 0;
}
