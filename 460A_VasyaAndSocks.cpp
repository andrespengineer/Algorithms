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


int main()
{
    
    int n, m;
    int dias = 0;
    cin >> n >> m;
    while(n > 0)
    {
        dias++;
        n--;
        if(dias%m == 0)
            n++;
    }
    
    cout << dias << endl;
}
