#include<iostream>
using namespace std;
int monkey(int day)
{
	int number = 0;
	if (day==1)
	{
		number = 1;
	}
	else
	{
		number = (monkey(day - 1) + 1) * 2;
	}

	return number;

}

int main()
{
	int Day = 2;
	cout << monkey(Day) << endl;

	system("pause");
	return 0;
}