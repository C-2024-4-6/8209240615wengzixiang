#include<iostream>
using namespace std;
int main()
{
	char a =NULL;
	cout << "������һ���ַ�" << endl;
	cin >> a;
	int b = static_cast<int>(a);
	cout << b << endl;
	if (97 <= b <= 122)
	{
		cout << static_cast<char>(b - 32) << endl;

	}
	

	system("pause");
	return 0;
}


