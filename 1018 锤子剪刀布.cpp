#include<bits/stdc++.h>
using namespace std;

int maxNum(int a, int b, int c){
	int maxnum = 0;
	if (a > maxnum)
    	maxnum = a;
  	if (b > maxnum)
    	maxnum = b;
  	if(c > maxnum)
    	maxnum = c;
 	return maxnum;
}
 
int main(){
	int N;
	cin >> N;
	char jia, yi;
	int jwin = 0;
	int ywin = 0;
	int nowin = 0;
	int jiac, jiaj, jiab, yic, yib, yij;
	jiaj = jiac = jiab = yij = yib = yic = 0;
	
	while(N--){
		cin >> jia >> yi;
		if(jia == 'J'){
			if(yi == 'J') ++nowin;
			if(yi == 'C') ++ywin, ++yic;
			if(yi == 'B') ++jwin, ++jiaj;
		}
		else if(jia == 'C'){
			if(yi == 'C') ++nowin;
			if(yi == 'B') ++ywin, ++yib;
			if(yi == 'J') ++jwin, ++jiac;
		}
		else if(jia == 'B'){
			if(yi == 'B') ++nowin;
			if(yi == 'J') ++ywin, ++yij;
			if(yi == 'C') ++jwin, ++jiab;
		}
	}
		
	cout << jwin << " " << nowin << " " << ywin << endl;
	cout << ywin << " " << nowin << " " << jwin << endl;
	
	int ans1 = maxNum(jiab, jiaj, jiac);
	int ans2 = maxNum(yib, yij, yic);
	if(ans1 == jiab) cout << "B";
	else if(ans1 == jiac) cout << "C";
	else if(ans1 == jiaj) cout << "J";
		
	cout << " ";
	
	if(ans2 == yib) cout << "B";
	else if(ans2 == yic) cout << "C";
	else if(ans2 == yij) cout << "J";
	
	return 0;
}
