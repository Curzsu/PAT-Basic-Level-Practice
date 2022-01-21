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
	
	//首先倒置整个数组	
	reverse(array.begin(), array.end());
	
	/*注意，reverse倒置范围是一个左闭右开区间*/

	//倒置前 M 个元素 
	reverse(array.begin(), array.begin() + M);
	
	//再倒置后 N-M 个元素
	reverse(array.begin() + M, array.end());
	
	for (int i = 0; i < N - 1; i++)
	{
	cout << array[i] << " ";
	}	
	
	cout << array[N - 1];  //添加这一行，是因为输出结尾不能有空格！ 
	
	return 0;
}

