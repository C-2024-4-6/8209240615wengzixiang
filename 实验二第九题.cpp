#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b = 0;
	int c = 0;
	const float JG = 0.8;
	for (int a =1;;a++ )
	{
		c++;
		b += pow(2, c);
		if (b > 100)
		{
			cout << "ƽ��ÿ��" << b * JG / a << "Ԫ" << endl;
			break;
		}



	}

	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;

}