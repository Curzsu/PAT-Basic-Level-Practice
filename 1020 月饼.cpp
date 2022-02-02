#include<bits/stdc++.h>
using namespace std;

struct mooncake{
		float stock, sumprice, unitprice;
	};
	
bool cmp(mooncake a, mooncake b){
	return a.unitprice > b.unitprice;	//降序 
}

int main(){
	 int N, D;
	 cin >> N >> D;
	 vector<mooncake> v(N);  //初始化N个元素,每个都是0,每个元素是又一个vector<mooncake>类型的数组 
	 
	 for(int i = 0; i < N; i++){
	 	scanf("%f", &v[i].stock);
	}
	
	for(int i = 0; i < N; i++){
	 	scanf("%f", &v[i].sumprice);
	}
	
	 for(int i = 0; i < N; i++){
	 	v[i].unitprice = v[i].sumprice / v[i].stock;
	}	
	
	sort(v.begin(), v.end(), cmp);
	
	float ans = 0.0;
	
	for(int i = 0; i < N; i++){
		if(D >= v[i].stock){
			ans += v[i].sumprice;
			D -= v[i].stock;
		}else{
			ans += v[i].unitprice * D;
			break;
		}
	}
	
	cout << fixed <<setprecision(2) << ans;
		
	return 0;
}
