#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		cout << "�������ܳ�Ϊ" << (a + b + c) << endl;

		if (a == b || a == c || b == c)
		{
			cout << "���������Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "������������" << endl;

	}
	



	system("pause");
	return 0;
}