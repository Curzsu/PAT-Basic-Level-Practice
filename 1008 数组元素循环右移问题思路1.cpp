#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int  N , M;
	cin >> N >> M;
	int num;
	for(int i = 0 ; i < N; i++){
		cin >> num;
		v.push_back(num);
	}
	M = M % N;
	//���´���������
	//����ȴ��AC����֪��Ϊɶ������� 
/*	reverse(begin(v), begin(v) + N);
        reverse(begin(v), begin(v) + M);
        reverse(begin(v) + M, begin(v) + N);
*/
//����Ϊ����AC�ֲ��ᱨ�������Ĵ��� 
		reverse(v.begin(), v.begin() + N);
        reverse(v.begin(), v.begin() + M);
        int aw = v.begin() + M;
        cout << aw << endl;
        reverse(v.begin() + M, v.begin() + N);
for (int i = 0; i < N - 1; i++)
        cout << v[i] << " ";
    //cout << v[N - 1]; 
	return 0;
}
