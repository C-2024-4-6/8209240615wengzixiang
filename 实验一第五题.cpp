#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a = 0;
	cout << "�����뻪�϶�" << endl;
	cin >> a;
	cout << "���϶�Ϊ" << fixed<<setprecision(2)<<(a - 32) / 1.8 << endl;
}
