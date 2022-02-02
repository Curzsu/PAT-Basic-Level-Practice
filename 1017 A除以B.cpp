#include<bits/stdc++.h>
using namespace std;

int main(){
	string A;
	int B;
	cin >> A >> B;
	vector<int> v1, v2;
	for(int i = 0; i < A.length(); i++) v1.push_back(A[i] - '0');
	
	int R = 0;
	for(int i = 0; i < v1.size(); i++){
		R = R * 10 + v1[i];
		v2.push_back(R / B);
		R %= B;
	}
	reverse(v2.begin(), v2.end());
	
	while(v2.size() > 1 && v2.back() == 0){
		v2.pop_back();
	}
	
	for(int i = v2.size() - 1; i >= 0; i--){
		cout << v2[i];
	}
	cout << " ";
	cout << R;
	
return 0;	
}
