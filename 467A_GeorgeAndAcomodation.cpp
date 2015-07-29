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
    
    int n;
    int p, q;
    int cnt = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> p >> q;
        
        if(p+2 <= q)
            cnt++;
    }
    
    cout << cnt << endl;
    
  
}
