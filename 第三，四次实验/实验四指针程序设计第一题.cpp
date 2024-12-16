#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{

	const int l1 = strlen(s1);
	const int l2 = strlen(s2);
	for (int i = 0; i < l2; i++)
	{
		if (s2[i] == s1[0])
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


	const char *string1 = "welcome";
	const char *string2 = "we welcome you";
	cout << "first string:" << string1 << endl;
	
	cout << "second string:" << string2 << endl;
	
	cout << indexof(string1, string2) << endl;

	return 0;
}