class Student              
{
public:                  
	void display();
	void set_value(int Num,const char*Name, char Sex);
	Student();
private:
	int num;
	char name[20];
	char sex;
};