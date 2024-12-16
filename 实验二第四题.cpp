#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	char b = NULL;
	int c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	if (b == '+')
	{
		cout << a + c << endl;
	}
	else if (b == '-')
	{
		cout << a - c << endl;
	}
	else if (b == '*')
	{
		cout << a * c << endl;
	}
	else if (b == '%')
	{
		if (c != 0)
		{
			cout << a%c << endl;
		}
		else
		{
			cout << "除数不能为零" << endl;
		}
	}
	else if (b == '/')
	{
		if (c != 0)
		{
			cout << a / c << endl;
		}
		else
		{
			cout << "除数不能为零" << endl;
		}
	}
	else
	{
		cout << "非法运算符" << endl;
	}





	system("pause");
	return 0;
}