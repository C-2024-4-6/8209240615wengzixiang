#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	for (int c = (a<b)?a:b;c>0; c--)
	{
		if ((a % c == 0) && (b % c == 0))
		{
			cout << "���Լ��Ϊ"<<c << endl;
			cout << "��С������" << (a * b) / c << endl;
			break;
		}
	}
	
	
	
	
	
	
	
	system("pause");
	return 0;
}