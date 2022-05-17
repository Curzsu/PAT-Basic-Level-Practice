#include<bits/stdc++.h>
using namespace std;

void cal(string model, string s1, string s2){
	vector<int> v;
	int t = 0;
	int jin = 0;
	for(int i = 0; i < model.length(); i++){
		t = (s1[i] - '0') + (s2[i] - '0') + t;
		jin = model[i] - '0';
		if(jin == 0) jin = 10;
		v.push_back(t % jin);
		t /= jin;
	}
	if(t > 0) v.push_back(t);
	while(v.size() > 1 and v.back() == 0) v.pop_back();   //去掉前导零
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i];
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(false);
	int N;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string modelStr = string(s1.rbegin(), s1.rend());
	string sa = string(s2.rbegin(), s2.rend());
	string sb = string(s3.rbegin(), s3.rend());
	string tmpStr = string(modelStr.length() - sa.length(), '0');
	sa.append(tmpStr);    //为了便于计算，将数字扩展到和model有相同的数位
	tmpStr = string(modelStr.length() - sb.length(), '0');
	sb.append(tmpStr);
	cal(modelStr, sa, sb);
	
	return 0;
}
