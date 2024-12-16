#include<iostream>
using namespace std;
int main()
{
	float x = 0;
	float y  = 0;
	cin >> x;
	if (x>0&&x<1)
	{
		y = 3 - 2*x;
		cout << y << endl;
	}
	else if (x>=1&&x<5)
	{
		cout<<(y = 1 / (2*x) + 1) << endl;
	}
	else if (x<10&&x>=5)
	{
		cout<<(y = x*x)<<endl;
	}





	system("pause");
	return 0;
}