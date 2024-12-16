#include<iostream>
using namespace std;
bool is_prime(int num);
bool is_prime(int num)
{
	int sum = 0;
	for (int a = num-1; a > 1; a--)
	{
		if (num % a == 0)
		{
			sum++;
		}
	}
	if (sum == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number = 0;
	for (int b = 1; b > 0; b++)
	{
		is_prime(b);
		if (is_prime(b) == true)
		{
			cout << b<<'\t';
			number++;
			if (number % 10 == 0)
			{
				cout << endl;
			}
		}
		if (number >= 200)
		{
			break;
		}
	}
	system("pause");
	return 0;
}
