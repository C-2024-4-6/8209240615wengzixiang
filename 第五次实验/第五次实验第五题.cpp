#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X=60, int Y=80) :x(X), y(Y){}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "������Ϊ" << '\t'<<x << endl;
		cout << "������Ϊ" <<'\t'<< y << endl;
	}
};
int main()
{
	Point p1;
	p1.setPoint(2, 4);
	p1.display();

	system("pause");
	return 0;
}