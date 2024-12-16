#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	
		 int x = 0, y = 0,i=0;
		while (x<size1&&y<size2)
		{
			if (list1[x] >= list2[y])
			{
				list3[i++] = list2[y];
				y++;
			}
			else if (list1[x] < list2[y])
			{
				list3[i++] = list1[x];
				x++;
			}
		}
		while (x < size1)
		{
			list3[i++] = list1[x++];
		}
		while (y < size2)
		{
			list3[i++] = list2[y++];
		}
	
}
int main()
{
	const int Max = 80;
	int size1, size2;
	int list1[Max], list2[Max],list3[2*Max];
	cout << "Enter list1:";
	cin >> size1;
	for (int n = 0; n < size1; n++)
	{
		cin >> list1[n];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int n = 0; n < size2; n++)
	{
		cin >> list2[n];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is";
	for (int i = 0; i < (size1 + size2); i++)
	{
		cout << list3[i] << '\t';
	}
	system("pause");
	return 0;
}