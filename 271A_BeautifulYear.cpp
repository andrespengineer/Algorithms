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


bool eval(int year)
{
    int n = year;
    int digits = 0;
    
    while(n > 0)
    {
        n = n/10;
        digits++;
    }
    
    int arr[digits];
    int c = 0;
    
    while(year > 0)
    {
        arr[c] = year%10;
        year = year/10;
        c++;
    }
    
    
    for(int i = 0; i < digits; i++)
    {
        for(int j = i+1; j < digits; j++)
        {
            if(arr[i] == arr[j])
                return (false);
        }
    }
    
    return (true);
}


int main()
{
    
    int year;
    
    cin >> year;
    
    while(true)
    {
        year++;
        if(eval(year) == true)
        {
            cout << year << endl;
            break;
        }
    }

    
}
