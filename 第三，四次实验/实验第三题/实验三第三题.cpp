#include<iostream>
#include"mytemperature.h"
#include<iomanip>
using namespace std;
int main()
{
	
	cout << "Celsius" <<'\t' << "Fahrenheit" << "|" << "Fahrenheit" << '\t' << "Celsius" << std::endl;
	for (double a = 40.0, b = 120.0; a > 30 && b > 20; a--, b -= 10)
	{
		cout << a<<'\t'<<fixed << setprecision(2) << celsius_to_fah(a) << '|' << b<<'\t'<<fixed << setprecision(2) << fahrenheit_to_cels(b) << std::endl;
	}

	system("pause");
	return 0;
}