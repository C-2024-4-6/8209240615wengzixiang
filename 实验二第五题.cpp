
#include <iostream>  
#include <cctype>  
using namespace std;
    int main() 
    {
        char input[1000];
        cout << "请输入一行字符: "<<endl;
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

        cout << "英文字母个数: " << zimu << endl;
        cout << "空格个数: " << kongge << endl;
        cout << "数字字符个数: " <<shuzi << endl;
        cout << "其他字符个数: " << qita << endl;

        return 0;
    }




	
	
	
	
	
