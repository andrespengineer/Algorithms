// Codeforces_Andrespengineer
/* List of solved problems  
 * 
 * Andrés Sierra
 * Instituto Tecnológico de Santo Domingo (INTEC)
 *
 */ 
 
#include <iostream>
#include <math.h>

using namespace std;

int mcdFunction(int a, int b)
{
    int mcd;
    
    while (a != b)
        {
            if (a > b)
                a -= b;
            else
                b = b - a;
        }
        
        mcd = a;
        
        return (mcd);
}

int main()
{
    
    
    int a, b, n;
    bool juego = true;
    
    cin >> a >> b >> n;
    
    int mcd;
    int jugada = 0;
    
    while(juego == true)
    {
        if(jugada%2 == 0)
            mcd = mcdFunction(a,n);
        else
            mcd = mcdFunction(b,n);
        
        n = n - mcd;
        
        if(n < mcd)
        {
            juego = false;
            
            if(jugada%2 == 0)
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
        
        jugada++;

    }
           
}
