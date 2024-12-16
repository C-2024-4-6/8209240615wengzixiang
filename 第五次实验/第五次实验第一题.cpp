#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int m_hour;
	int m_minute;
	int m_sec;
public:
	void input(int hour, int minute, int sec)
	{
		m_hour=hour;
		m_minute=minute;
		m_sec=sec;
	}
	void print(Time &time) 
	{
		cout << time.m_hour << ":" << time.m_minute << ":"  << time.m_sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.input(1, 2, 3);
	t1.print(t1);
	return 0;
}