#include<iostream>
using namespace std;
int main()
{
	int b=1;
	for (int a = 1; a <= 5; a++) 
	{
		b = a;
		while(b>0)
		{
			b--;
			cout << '*';

		}
		cout << endl;
	}





	system("pause");
	return 0;
}