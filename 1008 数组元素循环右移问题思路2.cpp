#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> array;
	int N, M;
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
	int num;
	cin >> num;
	array.push_back(num);
	}
	
	M %= N;
	
	//���ȵ�����������	
	reverse(array.begin(), array.end());
	
	/*ע�⣬reverse���÷�Χ��һ������ҿ�����*/

	//����ǰ M ��Ԫ�� 
	reverse(array.begin(), array.begin() + M);
	
	//�ٵ��ú� N-M ��Ԫ��
	reverse(array.begin() + M, array.end());
	
	for (int i = 0; i < N - 1; i++)
	{
	cout << array[i] << " ";
	}	
	
	cout << array[N - 1];  //�����һ�У�����Ϊ�����β�����пո� 
	
	return 0;
}

