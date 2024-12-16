#include<iostream>
using namespace std;
void paixu(int* p,int size)
{
	for (int t = 0; t < size-1; t++)
	{
		if (p[t] > p[t + 1])
		{
			int temp = *(p + t);
			*(p + t) = *(p + t + 1);
			*(p + t + 1) = temp;//µØÖ·´«µÝ
		}



	}

}


int main()
{
	int n;
	cin >> n;
	int* ip = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ip[i];
	}
	
	paixu(ip,n);
	for (int t = 0; t < n; t++)
	{
		cout << ip[t] << '\t';
	}
	
	delete[]ip;
	system("pause");
	return 0;
}