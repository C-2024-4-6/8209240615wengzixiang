#include<iostream>
#include<Cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	double num = 0;
	int size = strlen(hexString);
	for (int i = 0; i <size ; i++)
	{
		if (hexString[i] >= 65)
		{
			num += (hexString[i] - 64 + 9) * pow(16, size - i - 1);
		}
		else
		{
			num += (hexString[i] - '0') * pow(16, size - i-1);
		}


	}
	return (int)num;
}
int main()
{
	cout << parseHex("A5") << endl;;
	system("pause");
	return 0;
}