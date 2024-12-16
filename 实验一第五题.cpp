#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a = 0;
	cout << "请输入华氏度" << endl;
	cin >> a;
	cout << "摄氏度为" << fixed<<setprecision(2)<<(a - 32) / 1.8 << endl;
}
