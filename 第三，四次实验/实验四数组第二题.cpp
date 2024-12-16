#include<iostream>
using namespace std;
void changed(double a[])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (a[j]> a[j + 1])
			{
				double temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				changed = true;
			}
	} while (changed);




}

int main()
{
	double num[10];
	for (int n = 0; n < 10; n++)
	{
		cin >> num[n];
	}
	changed(num);
	for (int n = 0; n < 10; n++)
	{
		cout << num[n] << '\t';
	}

	system("pause");
	return 0;
}