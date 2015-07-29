// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
#include <iostream>

using namespace std;

int main()
{
    
    string str;
    cin >> str;
    
    for(unsigned int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'H'|| str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES";
            break;
        }
        else if(i+1 == str.length()){
            
            cout << "NO";
            break;
        }
            
    }
     
}
