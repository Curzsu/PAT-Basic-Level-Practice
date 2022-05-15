#include<bits/stdc++.h>
using namespace std;

int main(){
	int A, D;
	cin >> A >> D;
	int len = to_string(A).length() - D;
	int t = pow(10, D);
	double res = (A / t) + (A % t) * pow(10, len);
	cout << fixed << setprecision(2) << res / A;
	
	return 0;
}
