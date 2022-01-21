#include<bits/stdc++.h>
using namespace std;

bool isPrime(int u){	//ÅĞ¶ÏÊÇ·ñÊÇËØÊı 
		for(int i = 2; i <= sqrt(u); i++){
			
			if(u % i == 0)
			return false;
			
		}
	
	return true;
}

int main(){
int N;
int primenum = 0;  
cin >> N;

	for(int i = 4; i <= N; i++){
		
		if(isPrime(i-2) && isPrime(i)){
		++primenum;	
		}
		
	}
	
	cout << primenum;
	
	return 0;
} 
