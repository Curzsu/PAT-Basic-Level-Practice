#include<bits/stdc++.h>
using namespace std;
map<int,string> m;
string n;     //��Ϊ�Ǵ�����������Ҫ�����string���� 
int main(){
int sum = 0;
cin >> n;
m.insert(make_pair(0,"ling"));m.insert(make_pair(1,"yi"));
m.insert(make_pair(2,"er"));m.insert(make_pair(3,"san"));
m.insert(make_pair(4,"si"));m.insert(make_pair(5,"wu"));
m.insert(make_pair(6,"liu"));m.insert(make_pair(7,"qi"));
m.insert(make_pair(8,"ba"));m.insert(make_pair(9,"jiu"));
for(int i = 0;i < n.length(); i++){
	sum += n.at(i) - '0';            //��string�ϸ���λ���ĺ� 
}
int k;
string str;
while(sum != 0){
	k = sum % 10;
	sum /= 10;
	map<int,string>:: iterator pos =  m.find(k);
	str = (*pos).second + str; 
	if(sum > 0) str = " " + str; else break;
}
cout << str;
}
