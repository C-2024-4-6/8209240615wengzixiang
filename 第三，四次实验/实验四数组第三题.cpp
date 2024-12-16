#include<iostream>
using namespace std;
int main()
{
	bool box[100] = { false };
	for (int n = 1; n <=100; n++)
	{
		for (int num=n;num<=100;num+=n)
		{
			
			box[num-1]= ! box[num-1];
			
		}

	}
	for (int a = 0; a < 100; a++)
	{
		if (box[a])
		{
			cout << a + 1 << '\t';
		}
	}
	

	system("pause");
	return 0;
}