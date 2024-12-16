#include <iostream>
#include"student.h"  

void Student::display()         
{
    std::cout << "num:" << num << std::endl;
    std::cout << "name£º" << name << std::endl;
    std::cout << "sex£º" << sex << std::endl;
}
void Student::set_value(int Num,const char*Name,char Sex)
{
    num = Num;
    *name = *Name;
    sex = Sex;
}
Student::Student(){};
