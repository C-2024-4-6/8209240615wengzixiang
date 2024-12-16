#include<iostream>
using namespace std;
class column
{
private:
	int m_height;
	int m_width;
	int m_length;
public:
	column(int height, int width, int length)
	{
		m_height = height;
		m_width = width;
		m_length = length;
	}
	double volume()
	{
		return m_height * m_width * m_length;
	}
};
int main() 
{
	int a, b, c, d, e, f, g, h, i;
	cout << "输入第一个" << endl;
	cin >> a >> b >> c;
	cout << "输入第二个" << endl;
	cin >> d >> e >> f;
	cout << "输入第三个" << endl;
	cin>> g >> h >> i;
	column c1(a, b, c);
	column c2(d, e, f);
	column c3(g, h, i);
	cout << "第1个体积为：" << c1.volume() << endl;
	cout << "第2个体积为：" << c2.volume() << endl;
	cout << "第3个体积为：" << c3.volume() << endl;
	system("pause");
	return 0;
}