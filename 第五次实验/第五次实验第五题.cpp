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
		cout << "横坐标为" << '\t'<<x << endl;
		cout << "纵坐标为" <<'\t'<< y << endl;
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