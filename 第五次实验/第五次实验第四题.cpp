#include<iostream>
using namespace std;
class Student
{
private:
	long no;
	int score;
public:
	long GetNo()
	{
		return no;
	}
	int GetScore()
	{
		return score;
	}
	Student(long No, int Score)
	{
		no = No;
		score = Score;
	}
};
long max(Student*s)
{
	int max = 0;
	for (int n = 0; n < 4;n++)
	{
		max = (s[n].GetScore() > s[n + 1].GetScore()) ? s[n].GetScore() : s[n + 1].GetScore();
	}
	for (int i = 0; i < 5; i++)
	{
		if (s[i].GetScore() == max)
		{
			return  s[i].GetNo();
		}
	
	}
}
int main()
{
	Student S1[5] = { Student(001,78),Student(002,74) ,Student(003,71) ,Student(004,79) ,Student(005,100) };
	cout << max(S1) << endl;
	system("pause");
	return 0;
}