
#include <iostream>  
#include <cctype>  
using namespace std;
    int main() 
    {
        char input[1000];
        cout << "������һ���ַ�: "<<endl;
        cin.getline(input, 1000);

        int zimu = 0;
        int kongge = 0;
        int shuzi = 0;
        int qita = 0;

        for (int i = 0; input[i] != '\0'; ++i) 
        {
            if (isalpha(input[i])) {
                ++zimu;
            }
            else if (isspace(input[i])) 
            {
                ++kongge;
            }
            else if (isdigit(input[i])) 
            {
                ++shuzi;
            }
            else 
            {
                ++qita;
            }
        }

        cout << "Ӣ����ĸ����: " << zimu << endl;
        cout << "�ո����: " << kongge << endl;
        cout << "�����ַ�����: " <<shuzi << endl;
        cout << "�����ַ�����: " << qita << endl;

        return 0;
    }




	
	
	
	
	
