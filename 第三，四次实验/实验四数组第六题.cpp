#include<iostream>
#include<Cstring>
using namespace std;
void count(const char s[], int counts[])
{
	const int size1 = strlen(s);
	for (int x = 0; x < size1; x++)
	{
		for (int y = 0; y < 26; y++)
		{
			if (s[x] == 65 + y || s[x] == 97 + y)
				counts[y]++;

		}

	}

}
int main()
{
	const char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int c1[26] = {0};
	const int MAX = 100;
	char c2[MAX];
	cout << "Enter a string:";
	cin >> c2;
	count(c2, c1);
	for (int i = 0; i < 26; i++)
	{
		if (c1[i] != 0)
		{
			cout << alphabet[i] << ":" << c1[i] << "times" << endl;
		}
	}


	system("pause");
	return 0;
}