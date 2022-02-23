#include<bits/stdc++.h>
using namespace std;

int N;

int main(){
	cin >> N;
	string name, birth;
	string left = "1814/09/06";
	string right = "2014/09/06";
	string oldest = "1814/09/06";
	string youngest = "2014/09/06";
	string oname, yname;
	int cnt = 0;
	for(int i = 0; i < N; i++){
		cin >> name >> birth;
		if(birth >= oldest and birth <= youngest){ //ÅÐ¶ÏÊÇ·ñºÏ·¨ 
			++cnt;
			if(birth <= right){
				right = birth;	
				oname = name;
			} 
			if(birth >= left){
				left = birth; 
				yname = name;
			}
		}
	}	
	if(cnt == 0){
		cout << 0;
	}
	else{
		cout << cnt << " " << oname << " " << yname;	
	}
	
	return 0;
}
