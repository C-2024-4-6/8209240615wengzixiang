#include<iostream>
using namespace std;
int GYS(int&a,int&b)
{
	for (int c = (a > b) ? b : a; c > 0; c--)
	{
		if (a % c == 0 && b % c == 0)
		{
			return c;
		}
	
	}
}
void GYSandGBS(int&a,int&b)
{
	int d = 0;
	for (int c = (a > b) ? b : a; c > 0; c--)
	{
		if (a % c == 0 && b % c == 0)
		{
			d = c;
			break;
		}
	}
	cout << "���Լ��Ϊ" << d << endl;
	cout << "��󹫱���Ϊ" << a * b / d << endl;

}
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	cout << "���Լ��Ϊ" << GYS(m, n) << endl;
	GYSandGBS(m, n);
	system("pause");
	return 0;
}