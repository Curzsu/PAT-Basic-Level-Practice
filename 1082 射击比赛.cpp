#include<bits/stdc++.h> //注意输出要带格式,以及if条件里和外面都得记得加abs
using namespace std;

int main(){
	int N;
	cin >> N;
	int maxDis = 0, minDis = 123456789, x, y;
	int minId, maxId, id;
	auto solve = [&](){
		cin >> id >> x >> y;
		if(abs(x * y) > maxDis) maxDis = abs(x * y), maxId = id;
		if(abs(x * y) < minDis) minDis = abs(x * y), minId = id;
	};
	while(N--) solve();
	printf("%04d %04d", minId, maxId);
	return 0;
}
