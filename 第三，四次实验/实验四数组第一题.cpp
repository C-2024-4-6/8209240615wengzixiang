#include<iostream>
#include <vector>
//����vector
using namespace std;
int main()
{
	cout << "Enter ten numbers:";
	int a[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
	}
	
	
	vector<int>xin;/*����һ����̬�������ڴ���*/
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
			xin.push_back(a[n]);/*��̬�����������*/
		}
	
	}
	/*xin.size�������ڻ�ȡ���鳤��*/
	cout << endl<< "The distinct numbers:";
	for (int n = 0; n <xin.size(); n++)
	{
		cout << xin[n] << '\t'; 
		
	}
	return 0;
}