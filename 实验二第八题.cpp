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
	cout << "������һ������" << endl;
	cin >> x;
	if (x < 0)
	{
		cout << "����û��ƽ����" << endl;
	}
	else if (x==0)
	{
		cout << "ƽ����Ϊ��" << endl;
	}
	else
	{
		y = shulie(x);
		cout << "����������ֵ�ƽ����Ϊ" << y << endl;
	}





	system("pause");
	return 0;
}