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
	cout << "最大公约数为" << d << endl;
	cout << "最大公倍数为" << a * b / d << endl;

}
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	cout << "最大公约数为" << GYS(m, n) << endl;
	GYSandGBS(m, n);
	system("pause");
	return 0;
}