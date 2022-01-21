#include<bits/stdc++.h>
using namespace std;

struct Student{
	string sname;
	string snum;
	int score;
}A, MAX, MIN;


int main(){
	int n;
	cin >> n;
	cin >> A.sname >> A.snum >> A.score;
	MAX = A;
	MIN = A;
	
	for(int i = 0; i < n - 1; i++){
		cin >> A.sname >> A.snum >> A.score;
		
		if(A.score > MAX.score){
			MAX = A;	
		}
		else if (A.score < MIN.score){
			MIN = A;
		}
		
	}
	
	cout << MAX.sname << " " << MAX.snum << endl;
	cout << MIN.sname << " " << MIN.snum << endl;
	
	return 0;
} 
