#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	Time t1;           //����t1ΪTime�����
	t1.input(1, 2, 3);
	t1.print(t1);
	return 0;
}