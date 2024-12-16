#include<iostream>
#include <vector>
//引入vector
using namespace std;
int main()
{
	cout << "Enter ten numbers:";
	int a[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
	}
	
	
	vector<int>xin;/*创建一个动态数组用于储存*/
	int x = 0;
	for (int n = 0; n < 10; n++)
	{
		int num = 0;
		
		for (int i = 0; i < n; i++)
		{
			if (a[i] == a[n])
			{
				num++;
			}
		}
		if (num == 0)
		{
			x++;
			xin.push_back(a[n]);/*向动态数组加入数据*/
		}
	
	}
	/*xin.size（）用于获取数组长度*/
	cout << endl<< "The distinct numbers:";
	for (int n = 0; n <xin.size(); n++)
	{
		cout << xin[n] << '\t'; 
		
	}
	return 0;
}