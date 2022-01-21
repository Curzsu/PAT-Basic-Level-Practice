#include<bits/stdc++.h>
using namespace std;

int main(){
	int A1, A2, A3, A5;
	A1 = A2 = A3 = A5 = 0;
	double A4;
	vector<int> v[5];
	int N;
	cin >> N;
	int sig = 1;       //正负号 
	int num;
	double sum = 0;		//用来求平均数 
	int max = 0;
	int flg = 0;		//保证最后不输出空格 
	for(int i = 0; i < N; i++){
		cin >> num;
		v[num % 5].push_back(num);
	}
	
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < v[i].size(); j++){
			if(i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
			if(i == 1){ A2 += (v[i][j] * sig); sig = -sig;}
			if(i == 3) sum += v[i][j];
			if(i == 4) if(v[i][j] > max) max = v[i][j]; A5 = max;
		}
	}

	A3 = v[2].size();
	A4 = sum / (double)(v[3].size());

	for(int i = 0; i < 5; i++){
		if(flg == 1) cout << " ";
		flg = 1;
		if (i == 0 && A1 == 0 || i > 0 && v[i].size() == 0) {
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", A3);
        if (i == 3) printf("%.1f", A4);
        if (i == 4) printf("%d", A5);
	}
	
return 0;	
} 
