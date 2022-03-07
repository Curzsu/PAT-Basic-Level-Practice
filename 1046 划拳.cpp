#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int jiahan, jiahua, yihan, yihua;
	int jiacnt = 0;
	int yicnt = 0;
	int sum = 0;
	for(int i = 0; i < N; i++){
		cin >> jiahan >> jiahua >> yihan >> yihua;
		sum = jiahan + yihan;
		if((jiahua == sum and yihua == sum) or (jiahua != sum and yihua != sum)){
			sum = 0;
			continue;
		}
		else if(jiahua == sum){
			++yicnt;
		}
		else{
			++jiacnt;
		}
		sum = 0;
	}
	cout << jiacnt << " " << yicnt;
	
	return 0;
}
