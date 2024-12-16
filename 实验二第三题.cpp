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
		cout << "三角形周长为" << (a + b + c) << endl;

		if (a == b || a == c || b == c)
		{
			cout << "这个三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不构成三角形" << endl;

	}
	



	system("pause");
	return 0;
}