// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
 #include <iostream>
#include <cstdlib>
#include <math.h>




using namespace std;


int primo(int n)
{
    

    int d = sqrt(n);
    int r = n%d;

    while(r > 0)
    {
        d = d-1;
        r = n % d;
    }
    
    return (d);
}

int main()
{
    
    int n;
    int sum;
    int _1 = 0, _2 = 0;
    
    cin >> n;
    
    if(n%2 == 0 && primo(n/2) != 1)
        cout << n/2 << " " << n/2 << endl;
        
    else if(n%2 != 0 && primo(n/2) != 1 && primo(n/2 + 1) != 1)
        cout << n/2 << " " << n/2 + 1 << endl;
    
    else{
        
    int found = 0;
    
    for(int i = 2; i < n; i++)
    {
        sum = i;
        int flag = sum;
        
        for(int j = i+1; j < n; j++)
        {
            if(primo(i) != 1 && primo(j) != 1)
            {
                
                if(sum+j != n)
                    sum = flag;
                
                else{
                    
                    _1 = i;
                    _2 = j;
            
                    found = 1;  
                }
            }
            
            if(found == 1)
                break;
            
        }
        
    }
    
    cout << _1 << " " << _2 << endl;
}
    
}
