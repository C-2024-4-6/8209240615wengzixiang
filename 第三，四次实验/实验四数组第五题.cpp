#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	
	const int l1 = strlen(s1);
	const int l2 = strlen(s2);
	for (int i = 0; i < l2; i++)
	{
		if (s2[i]==s1[0])
		{
			bool PD = true;
			for (int n = 1; n < l1; n++)
			{
				if (s2[i + n] != s1[n])
				{
					PD = false;
				}


			}
			if (PD == true)
			{
				return i + 1;
			}


		}
	}
	return -1;
	
}
int main()
{
	const int MAX = 100;
	char c1[MAX];
	char c2[MAX];
	cout << "Enter the first string:";
	
	cin >> c1;
	cout << "Enter the second string:";
	
	cin >> c2;
	cout << "indexOf(" << c1 << "," << c2 << ")" << "is" << indexOf(c1, c2) << endl;


	system("pause");
	return 0;
}