// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
 #include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string str[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n, pos = 0;
    int flag = 1;
    
    cin >> n;
    
    for(; n >= 1;)
    {
        pos = 0;
        for (int j = 0; j < 5; j++)
        {
            n = (n - flag);
            
            if(n <= 0)
                break;
            
            pos++;
        }
        
        flag = flag*2;

    }
    
    cout << str[pos] << endl;
          
}
