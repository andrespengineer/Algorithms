// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
#include <iostream>
#include <cstdlib>

using namespace std;


int LuckyNumber(int n)
{

       
        int LuckyDigits = 0;
        int temp = n;
        int digits = 0;
        
        while(temp > 0)
        {
            temp = temp/10;
            digits++;
        }
        
        while(n > 0)
        {
            
            if(n%10 == 7 || n%10 == 4){
                LuckyDigits++;
            }
            
            n = n/10;
            
        }
        
        if(digits != LuckyDigits)
            return (-1);
        else
            return (0);
}



int main()
{
    
    int n;
    
    cin >> n;


    for(int i = 1; i <= n; i++)
    {
        if(LuckyNumber(i) == 0)
        {
            if(n%i == 0)
            {
                cout << "YES" << endl;
                break;
            }
        }
        
        if(i+1 > n)
        {
            cout << "NO" << endl;
        }
    }
    
}
