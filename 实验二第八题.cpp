#include<iostream>
using namespace std;
float shulie(float a)
{
	
	float t = 0;
	t= 0.5 * (a + 1);
	while ((0.5 * (t + a / t) - t) > (1e-5) || ((0.5 * (t + a / t) - t)) < -(1e-5))
	{
		t = 0.5 * (t + a / t);
	}
	return 0.5 * (t + a / t);	
}


int main()
{
	float x = 0;
	float y = 0;
	cout << "请输入一个数字" << endl;
	cin >> x;
	if (x < 0)
	{
		cout << "负数没有平方根" << endl;
	}
	else if (x==0)
	{
		cout << "平方根为零" << endl;
	}
	else
	{
		y = shulie(x);
		cout << "所输入的数字的平方根为" << y << endl;
	}





	system("pause");
	return 0;
}